#include "Sistema.hpp"
#include <fstream> // Para leer archivos
#include <iostream>


void Sistema::mostrarPacientesEspera(){
    pendientes.mostrar();
}

void Sistema::mostrarPacientesAtendidos(){
    atendidos.mostrar();
}
void Sistema::CargarArchivo(string arch){
    ifstream archivo(arch);
    if(!archivo.is_open()){
        cout<< "Error: no se pudo abrir el archivo" << arch << endl;
        return;
    }
    string linea;
    int cantLineas = 0;
    while(getline(archivo, linea)){
        cantLineas++;
        if(linea.empty()) continue; // Ignorar líneas vacías o en blanco

        string partes[4];

        bool formatoValido = separarLinea(linea, partes);
        if(!formatoValido){
            cout << "Error: formato de línea inválido en la línea " << cantLineas << ". Paciente no agregado." << endl;
            continue; // Saltar a la siguiente línea
        }


        string id = partes[0];
        string nombre = partes[1];
        int edad = stoi(partes[2]);
        string servicio = partes[3];
        
        Paciente p(id, nombre, edad, servicio);

        if(hospital.buscarServicio(servicio) == nullptr){
            cout << "Error: el servicio " << servicio << " no existe. Paciente " << nombre << " no agregado." << endl;
            continue; 
        }

        if(pendientes.existeId(id)){
            cout << "Error: el paciente con ID " << id << " ya existe en la cola de espera. Paciente " << nombre << " no agregado." << endl;
            continue; 
        }

        pendientes.AgregarPaciente(p);

    }

}

/*
* Esta función separa una línea en partes utilizando el delimitador ';' y almacena las partes en un arreglo de strings.
* Devuelve true si se separaron exactamente 4 partes, de lo contrario devuelve false.
* El "\0" al final de la línea indica el final de la cadena, por lo tanto el bucle se detiene cuando se alcanza ese carácter.
*/
bool separarLinea(const string& linea, string partes[4]) {
    const char* inicio = linea.c_str();
    const char* cursor = inicio;
    int campoActual = 0;

    while (*cursor != '\0' && campoActual < 4) {
        const char* inicioCampo = cursor;

        while (*cursor != ';' && *cursor != '\0') {
            cursor++;
        }

        long largoCampo = cursor - inicioCampo;
        partes[campoActual] = string(inicioCampo, largoCampo);
        campoActual++;

        if (*cursor == ';') {
            cursor++;
        }
    }

    return campoActual == 4;
}

void Sistema::verDepartamento(){
    cout << "=== DEPARTAMENTO ===" << endl;
    cout << "Pacientes en espera: " << endl;
    pendientes.mostrar();
    cout << "Pacientes atendidos: " << endl;
    atendidos.mostrar();
}

void Sistema::revisarHistorial(){
    cout << "=== HISTORIAL DE ATENCION ===" << endl;
    atendidos.mostrar();
}   
