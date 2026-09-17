#include "Hospital.hpp"
#include <iostream>
using namespace std;

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
        if(cursor->getServicio() == nombre){ //BUSCAR una manera para que no influyan las mayusculas y minusculas
            return cursor;
        }cursor = cursor->getNextServicio;

    }return nullptr;// no se encontro el servicio
}

void Hospital::derivarPaciente(Paciente p){
    string servicio = p.getServicio();
    NodoServicio* nodoServicio = buscarServicio(servicio);
    if(nodoServicio != nullptr){
        NodoPaciente* nuevo = new NodoPaciente(p);
        nuevo->setNext(nodoServicio->getPacienteLista());
        nodoServicio->setPrimerPaciente(nuevo);
    }else{
        //Dar un mensaje de que no se encontro el servicio sin cout 
    }
    
}

void Hospital::mostrarEstado(){
    NodoServicio* cursor = primerServicio;
    while(cursor!=nullptr){
        cout<<cursor->getServicio<()<< ": " << endl;
        NodoPaciente* paciente = cursor->getPacienteLista();

        while(paciente!=nullptr){
            cout<<"- "<< paciente->getPaciente().getNombre() << endl;

            paciente = paciente->getNext();
        }

        cursor = cursor->getNextServicio();
    }
}

void Hospital::mostrarServicio(string nombre){
    }

Hospital::~Hospital(){

}