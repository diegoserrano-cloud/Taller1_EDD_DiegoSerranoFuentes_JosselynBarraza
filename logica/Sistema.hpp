#pragma once
#include "Hospital.hpp"
#include "Cola.hpp"

class Sistema{
    private:
        Cola pendientes;
        Hospital hospital;
    public:
         void mostrarPacientesEspera();
         ;
};