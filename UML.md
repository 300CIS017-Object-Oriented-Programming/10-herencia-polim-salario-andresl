classDiagram
    class Empleado {
        +string nombre
        +double salarioBase
        +virtual double calcularSalario()
        +virtual void mostrarSalario()
    }

    class DesarrolladorJunior {
        +double calcularSalario()
        +void mostrarSalario()
    }

    class DesarrolladorSenior {
        +double calcularSalario()
        +void mostrarSalario()
    }

    class LiderTecnico {
        +double calcularSalario()
        +void mostrarSalario()
    }

    class Tester {
        +double calcularSalario()
        +void mostrarSalario()
    }

    Empleado <|-- DesarrolladorJunior
    Empleado <|-- DesarrolladorSenior
    Empleado <|-- LiderTecnico
    Empleado <|-- Tester
