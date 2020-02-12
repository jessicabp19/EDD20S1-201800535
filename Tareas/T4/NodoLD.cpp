#include "NodoLD.h"


NodoLD::NodoLD(char valor) {
	//Este es el constructor
	this->valor = valor;
	this->siguiente = 0;
	this->anterior = 0;
}

NodoLD::~NodoLD() {
//Este es el destructor
}