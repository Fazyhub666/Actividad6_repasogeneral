# Repaso General de C++

**Actividad 6 – Taller Práctico de Repaso y Consolidación en C++**

## Descripción

Este proyecto fue desarrollado como parte de la materia Laboratorio de Programación. Su objetivo es repasar y consolidar tres conceptos fundamentales del lenguaje C++: la recursividad, la búsqueda secuencial en arreglos y el uso de punteros para modificar valores en memoria.

El programa reúne tres ejercicios prácticos que permiten comprender el funcionamiento de las funciones recursivas, el recorrido de arreglos y la manipulación de datos mediante direcciones de memoria.

## Contenido del proyecto

El programa está dividido en tres desafíos:

### 1. Suma recursiva
Se implementa la función `sumaRecursiva()`, que calcula la suma de los números enteros desde 1 hasta un valor determinado. Se utiliza un caso base para detener las llamadas recursivas.

### 2. Búsqueda secuencial
Se realiza una búsqueda dentro de un arreglo de diez números enteros. El programa recorre sus elementos hasta encontrar el número buscado, muestra su índice y su dirección de memoria. Se utiliza `break` para finalizar el recorrido al encontrarlo.

### 3. Intercambio de valores mediante punteros
Se implementa la función `intercambiarValores()`, que recibe las direcciones de dos variables enteras y modifica sus contenidos utilizando punteros y una variable temporal.

## Tecnologías utilizadas

- Lenguaje de programación: C++.
- Biblioteca: `iostream`.
- Compilador: GCC (g++).
- Control de versiones: Git.
- Repositorios: GitHub y GitLab.

## Estructura del repositorio

```text
repasogeneral/
├── .gitignore
├── LICENSE
├── README.md
├── CHANGELOG.md
├── docs/
│   ├── InformeEEST1_LPR2026_ACT06_G99_Informe_v1.0.0.pdf
│   └── manuales/
│       ├── manual_programador_v1.0.0.pdf
│       └── manual_usuario_v1.0.0.pdf
├── src/
│   └── main.cpp
└── capturas/
    ├── ejecucion_repasogeneral.png
    └── traza_memoria.png
```

## Requisitos

Para compilar y ejecutar el programa se necesita:

- Una computadora con un sistema operativo compatible.
- Un compilador de C++ instalado, como GCC.
- Una terminal o consola de comandos.

## Compilación

Desde la carpeta principal del proyecto, ejecutar:

```bash
g++ src/main.cpp -o src/repasogeneral.exe
```

## Ejecución

En Windows, utilizar:

```powershell
.\src\repasogeneral.exe
```

En Linux, compilar y ejecutar con:

```bash
g++ src/main.cpp -o src/repasogeneral
./src/repasogeneral
```

## Resultados esperados

Al ejecutar correctamente el programa se obtienen los siguientes resultados:

- **Suma recursiva:** para el número 5, el resultado es 15.
- **Búsqueda secuencial:** el número 18 se encuentra en el índice 6 del arreglo.
- **Intercambio de valores:** las variables X e Y cambian de 100 y 500 a 500 y 100, respectivamente.

La dirección de memoria mostrada durante la búsqueda puede variar en cada ejecución.

## Documentación

Dentro de la carpeta `docs/` se encuentran el informe de la actividad y los manuales correspondientes:

- **Manual de usuario:** explica cómo compilar, ejecutar y utilizar el programa.
- **Manual del programador:** describe la estructura del código y el funcionamiento de sus funciones.
- **Informe:** presenta el desarrollo y las respuestas de la actividad.

## Control de versiones

El proyecto utiliza Git para registrar los cambios realizados durante su desarrollo.

La versión inicial corresponde a:

**Versión:** 1.0.0  
**Estado:** Baseline Aprobado.

Los cambios y actualizaciones se documentan en el archivo `CHANGELOG.md`.

## Autor

**Nombre y apellido:** Benjamin Hlynczuk  
**Curso:** 5.º3.ª  
**Institución:** EEST N.º 1 "Eduardo Ader"  
**Materia:** Laboratorio de Programación.

---

*Proyecto realizado con fines educativos como parte de la Actividad 6 – Taller Práctico de Repaso y Consolidación en C++.*