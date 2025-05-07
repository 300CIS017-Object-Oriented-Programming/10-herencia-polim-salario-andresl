#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;  // Cambio: uso explícito de std::
    double salarioBase;

public:
    Empleado(const std::string& nombre, double salarioBase);
    virtual ~Empleado() = default;

    virtual double calcularSalario() const = 0;
    virtual void mostrarSalario() const;
};

#endif
