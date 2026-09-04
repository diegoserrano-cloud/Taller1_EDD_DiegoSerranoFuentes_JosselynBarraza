#include <iostream>
#include <string>
using namespace std;

class Nodo {
    private:
        int dato;
        Nodo* siguiente;
    public:
        Nodo(int valor) : dato(valor), siguiente(nullptr) {}
        int getDato() { return dato; }
        Nodo* getSiguiente() { return siguiente; }
        void setSiguiente(Nodo* nodo) { siguiente = nodo; }
}

int main() {
    cout << "Hola Taller 1 "  << endl;

    return 0;
}