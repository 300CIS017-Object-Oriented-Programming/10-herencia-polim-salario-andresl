cmake_minimum_required(VERSION 3.10)
project(ProyectoNomina)

set(CMAKE_CXX_STANDARD 17)

# Agrega todos los archivos fuente
add_executable(ProyectoNomina
    main.cpp
    Empleado.cpp
    DesarrolladorSenior.cpp
    LiderTecnico.cpp
    Tester.cpp
)
