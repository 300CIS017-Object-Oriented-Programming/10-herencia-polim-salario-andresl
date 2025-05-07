#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(const std::string& nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double DesarrolladorSenior::calcularSalario() const {
    return salarioBase * 1.20;
}
