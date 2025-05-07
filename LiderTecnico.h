#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
};

#endif
