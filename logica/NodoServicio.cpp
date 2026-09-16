#include "NodoServicio.hpp"

NodoServicio::NodoServicio(string nombre) : nombre(nombre), primero(nullptr), next(nullptr) {}

string NodoServicio::getServicio() const{return nombre;}
NodoServicio* NodoServicio::getNextServicio() const{return next;}
NodoPaciente* NodoServicio::getPacienteLista() const{return primero;}

void NodoServicio::setNextServicio(NodoServicio* nuevo){ this->next = nuevo;}
void NodoServicio::setPrimerPaciente(NodoPaciente* p) {this->primero = p;}
