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

NodoServicio* Hospital::buscarServicio(string nombre) const{
    NodoServicio* cursor = primerServicio;
    while(cursor != nullptr){
        if(cursor->getServicio() == nombre){ //buscar una manera para que no influyan las mayusculas y minusculas
            return cursor;
        }cursor = cursor->getNextServicio;

    }return nullptr;// no se encontro el servicio
}

void Hospital::derivarPaciente(Paciente p){
    
    }

void Hospital::mostrarEstado(){

}

void Hospital::mostrarServicio(string nombre){
    }

Hospital::~Hospital(){

}