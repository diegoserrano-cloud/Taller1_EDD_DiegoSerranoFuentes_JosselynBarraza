#include "Paciente.hpp"

Paciente::Paciente(string id, string nombre, int edad, string servicio){
    this->id = id;
    this->nombre = nombre;
    this->edad = edad;
    this->servicio = servicio;
}
string Paciente::getId() const{return id;}
string Paciente::getNombre() const{return nombre;}
int Paciente::getEdad() const{return edad;}
string Paciente::getServicio() const{return servicio;}

void Paciente::setServicio(string nuevo){this->servicio = nuevo;}
