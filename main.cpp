#include <iostream>
#include <vector>
#include "Empleado.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

void inicializarDatos(std::vector<Empleado*>& empleados) {
    empleados.push_back(new DesarrolladorJunior("Juan", 1000));
    empleados.push_back(new DesarrolladorJunior("Ana", 1000));
    empleados.push_back(new DesarrolladorSenior("Pedro", 1500));
    empleados.push_back(new DesarrolladorSenior("Laura", 1500));
    empleados.push_back(new LiderTecnico("Luis", 2000));
    empleados.push_back(new LiderTecnico("Maria", 2000));
    empleados.push_back(new Tester("Carlos", 1200));
    empleados.push_back(new Tester("Sofia", 1200));
}

void procesarNomina(const std::vector<Empleado*>& empleados) {
    double total = 0.0;
    for (const auto& emp : empleados) {
        emp->mostrarSalario();
        total += emp->calcularSalario();
    }
    std::cout << "\nTotal a pagar: $" << total << std::endl;
}

int main() {
    std::vector<Empleado*> empleados;
    inicializarDatos(empleados);
    procesarNomina(empleados);

    for (auto emp : empleados) {
        delete emp;
    }

    return 0;
}
