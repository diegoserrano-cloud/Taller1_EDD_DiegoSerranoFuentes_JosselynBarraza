#include "Sistema.hpp"
#include <fstream>
#include <iostream>

void Sistema::mostrarPacientesEspera(){
    pendientes.mostrar();
}
void Sistema::CargarArchivo(string arch){
    ifstream archivo(arch);
    if(!archivo.is_open()){
        cout<< "Error: no se pudo abrir el archivo" << arch << endl;
        return;
    }
    string linea;
    while(getline(archivo, linea)){
        cout << "Linea leida: " << linea << endl; // solo para probar que funciona
    }

}


