#pragma once
#ifndef LISTADOBLEH
#define LISTADOBLEH
#include "NodoLD.h"
#include<string>


class ListaDoble
{
public:
	NodoLD* primero;
	NodoLD* ultimo;
	int tamanio=0;
	ListaDoble();
	bool estaVacia();
	virtual ~ListaDoble();
	void insertarPrimero(char c);
	void eliminarUltimo();
	void buscar(std::string s);
	void mostrar();

protected:

private:

};

#endif // !LISTADOBLEH


