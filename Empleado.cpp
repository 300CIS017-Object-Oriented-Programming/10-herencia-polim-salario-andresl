#include "Empleado.h"
#include <iostream>

Empleado::Empleado(const std::string& nombre, double salarioBase)
    : nombre(nombre), salarioBase(salarioBase) {}

void Empleado::mostrarSalario() const {
    std::cout << nombre << " - Salario: $" << calcularSalario() << std::endl;
}
