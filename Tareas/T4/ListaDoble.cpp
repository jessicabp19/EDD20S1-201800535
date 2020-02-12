#include "ListaDoble.h"
#include<string>
#include<iostream>
using namespace std;

ListaDoble::ListaDoble() {
	//Este es el constructor
	this->tamanio = 0;//YOOO
	this->ultimo = 0;
	this->primero = 0;
}

ListaDoble::~ListaDoble() {
//Este es el destructor
}

bool ListaDoble::estaVacia() {
	return this->tamanio == 0;
}

void ListaDoble::insertarPrimero(char c) {
	NodoLD *aux = new NodoLD(c);

	if (estaVacia()) {
		primero = aux;
		ultimo = aux;
	}
	else {
		aux->siguiente = primero;
		primero->anterior = aux;
		primero = aux;
	}
	tamanio++;
}

void ListaDoble::eliminarUltimo() {
	if (primero == NULL) {
		cout << "LISTA VACIA!";
	}
	else {
		ultimo->anterior->siguiente=NULL;
		ultimo = ultimo->anterior;
		tamanio--;
	}
}

void ListaDoble::buscar(std::string s) {
	NodoLD* aux = ultimo;
	bool encontrado = false;
	int cEncontrados = 0;
	
	while (aux != NULL && encontrado!=true) {
		if (aux->valor==s[0]) {
			cEncontrados++;
			NodoLD* matcher = aux->anterior;

			for (int i = 1; i < s.size(); i++) {
				if (matcher->valor == s[i]) { 
					cEncontrados++; 
					matcher = matcher->anterior;
				}
				else { break; }
			}
			if (cEncontrados==s.size()) {
				encontrado = true;
			}
			else { 
				cEncontrados = 0; 
			}
		}
		aux = aux->anterior;
	}
	if (encontrado == true) { cout << "\nSe encontro la palabra \""<<s<<"\", el primer caracter es " << s[0] << endl; }
	else {
		cout << "\nNO se encontro la palabra \"" << s << "\", busca otra palabra"<< endl;
	}
}

void ListaDoble::mostrar() {
	NodoLD* aux = ultimo;
	while (aux!=NULL) {
		cout << ">	"<<aux->valor<<endl;
		aux = aux->anterior;
	}
}

/*for (int i = 0; i < s.size() ; i++) {
		if (aux->valor==s[0]) {
		}
	}*/