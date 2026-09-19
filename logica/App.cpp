#include <iostream>
#include <string>
#include "Sistema.hpp"
using namespace std;

int main() {
    int opcion;
    Sistema sis;
    sis.CargarArchivo("pacientes.txt");
    do{
      cout<<"=== HOSPITAL MARMAJA =="<<endl;
      cout<<"1. Atender pacientes"<<endl;
      cout<<"2. Ver departamento"<<endl;
      cout<<"3. Revisar historial de atención"<<endl;
      cout<<"4. Salir"<<endl;
      cout<<" "<<endl;
      cout<<"Seleccionar opción (debe estar entre 1 y 4): ";
      cin>>opcion;
      try{
        //falta buscar una manera de controlar si ingresan una letra 

        if(opcion < 1 || opcion > 4){
            throw opcion;
        }
        switch(opcion){
            case 1:
                cout<<"== PACIENTES EN ESPERA"<<endl;
                sis.mostrarPacientesEspera();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                cout<<"Saliendo....."<<endl;
                break;
        }

      }catch(int e){
        cout<<"ERROR: "<< e << " invalido" << endl;
        opcion= 0;
      }

    }while(opcion != 4);
    return 0;

}