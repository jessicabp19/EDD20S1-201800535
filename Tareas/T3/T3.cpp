#include<iostream>
#include<conio.h>
using namespace std;//Para incluir todas las palabras reservadas std

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Funciones
void menu();
void insertar(Nodo *&,int);
void mostrar(Nodo *);
//Global
Nodo *lista=NULL;

int main(){
	
	int dato,opcion, carnet;
	string nombre="";
	cout<<"\tBIENVENIDO\n\n";
	do{
		cout<<"\nSelecciona una opcion:\n";
		cout<<"1) Insertar un nuevo estudiante\n2) Mostrar el listado de estudiantes\n3) Salir\n";
		cout<<"Su seleccion es: ";
		cin>>opcion;
		if(opcion==1){
			cout<<"\nIngresa el nombre:\n";
			cin>>nombre;
			cout<<"\nIngresa el carnet:\n";
			cin>>carnet;
			insertar(lista,carnet);
		}else if(opcion==2){
			mostrar(lista);
		}
	}while(opcion!=3);
	
	getch();
	return 0;
}




void insertar(Nodo *&lista, int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	
	Nodo *aux1=lista;
	
	if(lista==aux1){
		lista=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
	
	cout<<"\n---> Elemento insertado correctamente!\n";
}

void mostrar(Nodo *lista){
	Nodo *actual=new Nodo();
	
	actual=lista;
	while(actual!=NULL){
		cout<<actual->dato<<"->";
		actual=actual->siguiente;
	}
	cout<<"\n";
}




class Estudiante{
private:
    string nombre;
    int carne;
};
