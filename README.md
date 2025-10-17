## 1. Introducción

El objetivo de esta actividad es de crear un **árbol de habilidades** accesible desde el juego, que permita al jugador **desbloquear mejoras** usando puntos.
Se ha trabajado con **Unreal Engine 5**, utilizando **C++** para la lógica principal y **UMG** para la interfaz.
El proyecto se desarrolló como una demo de un juego sencillo, donde las habilidades no afectan directamente la jugabilidad pero sirven para probar la mecánica.

## 2. Estructura de datos

Se creó una `struct FSkillData` con los siguientes campos principales:
- `SkillID`: identificador único de la habilidad.
- `DisplayName`: nombre visible al jugador.
- `Description`: descripción de la habilidad.
- `Cost`: puntos necesarios para desbloquearla.
- `PrerequisiteSkillID`: habilidad que debe desbloquearse antes.
- `bUnlocked`: estado de la habilidad.

El árbol se organizó en **tres ramas principales** (Velocidad, Salud y Daño) con **al menos dos nodos por rama**, cumpliendo los requisitos mínimos.

## 3. Modelado del árbol

- Se implementó la función `InitializeSkills()` en C++ para poblar el árbol.
- Las **primeras tres habilidades** están desbloqueadas desde el inicio; el resto requiere cumplir prerequisitos y tener puntos suficientes.
- Se asegura que no se pueda desbloquear un nodo si su prerequisito no está cumplido, mostrando un **feedback textual**.
- Los nodos están organizados en tres ramas, siguiendo la lógica de progresión del jugador.

## 4. Interfaz de usuario (UMG + C++)

- Se creó un **widget principal (`WB_SkillTree`)** que contiene los nodos.
- Cada nodo es un **sub-widget (`WB_Skill`)** con botón, texto e imagen de icono de default.
- La lógica permite **seleccionar un nodo**, mostrar una **confirmación** (modal) y desbloquear la habilidad.
	- se usó el modal para aprender como mandar información entre paneles
- Se implementó **feedback visual**: nodos bloqueados no son seleccionables
- El widget se abre con un **input definido**, pulsando la 'M' durante el juego.
	- Usando la 'P' se incrementa la cantidad de puntos

## 5. Integración con el Player

- El widget obtiene el **referencia al SkillTreeComponent** del PlayerCharacter mediante `GetPlayerCharacter` y cast a la clase del personaje.
- Se inicializan los **puntos de habilidad** al inicio del juego; se pueden modificar desde el Level Blueprint para probar.
	- usando la tecla 'P'

## 6. Decisiones técnicas

- Se implementó la **lógica principal en C++** para practicar estructuras y componentes.
- Se utilizó **Blueprint solo para el diseño visual y bindings simples**, como botones y paneles.
- La estructura de datos se basó en un array de `FSkillData` para simplificar iteraciones y generación dinámica de widgets.

## 7. Arte y gráficos

- Se utilizó arte de **Kenney** para visualizar las acciones.

## 8. Test y depuración

- Se probó la selección de nodos, la confirmación de desbloqueo y la gestión de puntos.
- Se verificó que **no se pueda desbloquear una habilidad sin prerequisito** y que se actualice correctamente la UI.
- El sistema se probó creando varios nodos y asignando puntos iniciales desde el Level Blueprint.

## 9. Mejoras futuras:
    
- Implementar efectos reales de las habilidades en el juego.
- Añadir animaciones y transiciones visuales más elaboradas.
- Optimizar la creación de nodos de manera dinámica para árboles más grandes.

---

# Capturas

![[Pasted image 20251017204531.png]]

![[Pasted image 20251017204547.png]]

![[Pasted image 20251017204614.png]]

![[Pasted image 20251017210724.png]]

