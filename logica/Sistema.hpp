#pragma once

#include "Hospital.hpp"
#include "Cola.hpp"
#include "Stack.hpp"

class Sistema{
    private:
        Cola pendientes;
        Stack atendidos;
        Hospital hospital;
    public:
         void mostrarPacientesEspera();
         void CargarArchivo(string arch);
         void mostrarPacientesAtendidos();
         void revisarHistorial();
         void verDepartamento();
};