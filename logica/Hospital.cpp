#include "Hospital.hpp"

Hospital::Hospital(){
    string servicios[8] = {"Urgencias", "Medicina General", "Cardiología", "Neurología", 
                            "Traumatología", "Cirugía", "Pediatría", "Hospitalización"}
    
    NodoServicio* anterior = nullptr;
    primerServicio = nullptr;

    for(int i= 0; i< 8; i++){
        NodoServicio* nuevo = new NodoServicio(servicios[i]);

        if(primerServicio==nullptr){
            primerServicio = nuevo;

        }else{
            anterior->setNextServicio(nuevo);
        }anterior = nuevo;
    }
}

NodoServicio* Hospital::buscarServicio(string nombre) const; //recorre la lista y devuelve el servicio con ese nombre

void Hospital::derivarPaciente(Paciente p);//Segun el servicio se inserta el paciente en su lista interna

void Hospital::mostrarEstado(); //Recorre todos los servicios y muestra sus pacientes

void Hospital::mostrarServicio(string nombre); //Muestra los pacientes del servicio que se necesite

Hospital::~Hospital()