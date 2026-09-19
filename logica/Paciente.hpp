#pragma once
#include <string>
using namespace std;

class Paciente{
    private:
        string servicio;
    public:
        Paciente(string id, string nombre, int edad, string rut, string servicio);
};