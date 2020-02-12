// T4.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "ListaDoble.h"

using namespace std;

int main()
{
    cout << "\nHello World!\n" <<endl;

    ListaDoble *lista = new ListaDoble();   //Para realizar las busquedas no necesitamos espacios ni caracteres especiales
    lista->insertarPrimero('-');            //Fueron colocados con fines esteticos.
    lista->insertarPrimero('h');
    lista->insertarPrimero('o');
    lista->insertarPrimero('l');
    lista->insertarPrimero('a');
    lista->insertarPrimero(' ');
    lista->insertarPrimero('m');
    lista->insertarPrimero('i');
    lista->insertarPrimero('s');
    lista->insertarPrimero(' ');
    lista->insertarPrimero('a');
    lista->insertarPrimero('m');
    lista->insertarPrimero('i');
    lista->insertarPrimero('g');
    lista->insertarPrimero('a');
    lista->insertarPrimero('s');
    lista->insertarPrimero('-');

    lista->eliminarUltimo();
    
    lista->mostrar();//La lista fue mostrada de atras para adelante, con fines esteticos.

    lista->buscar("mis");
    lista->buscar("amiguitos");

    cout << "\nTodo bien, todo correcto\n";
}
/*SALIDA EN CONSOLA

Hello World!

>       h
>       o
>       l
>       a
>
>       m
>       i
>       s
>
>       a
>       m
>       i
>       g
>       a
>       s
>       -

Se encontro la palabra "mis", el primer caracter es m

NO se encontro la palabra "amiguitos", busca otra palabra

Todo bien, todo correcto*/
