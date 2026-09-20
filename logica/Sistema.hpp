#pragma once

#include "Hospital.hpp"
#include "Cola.hpp"
#include "Stack.hpp"

class Sistema{
    private:
        Cola* pendientes = new Cola();
        Stack* atendidos = new Stack();
        Hospital* hospital = new Hospital();
    public:
         void mostrarPacientesEspera();
         bool CargarArchivo(string arch);
         void mostrarPacientesAtendidos();
         void revisarHistorial();
         void verDepartamento();
         void atenderPaciente(int cantidad);
         
        ~Sistema();
};