#include<iostream>
#include<conio.h>
using namespace std;//Para incluir todas las palabras reservadas std

struct Nodo{
	int dato;
	string nombre;
	Nodo *siguiente;
};

//Prototipos de Funciones
void menu();
void insertar(Nodo *&,int, string);
void mostrar(Nodo *);
bool isEmpty(Nodo *);
void buscar(Nodo *, int);
void eliminar(Nodo *, int);
//Global
Nodo *lista=NULL;

int main(){
	
	int dato,opcion, carnet, pos;
	string nombre="";
	
	cout<<"\tBIENVENIDO\n\n";
	do{
		cout<<"\nSelecciona una opcion:\n";
		cout<<"1) Insertar un nuevo estudiante\n2) Mostrar el listado de estudiantes\n3) Buscar\n4) Eliminar\n5) Salir\n";
		cout<<"Su seleccion es: ";
		cin>>opcion;
		if(opcion==1){
			cout<<"\nIngresa el nombre:\n";
			cin>>nombre;
			cout<<"\nIngresa el carnet:\n";
			cin>>carnet;
			insertar(lista,carnet,nombre);
		}else if(opcion==2){
			mostrar(lista);
		}else if(opcion==3){
			if(!isEmpty(lista)){
                cout << "Posicion que desea buscar:"<< endl;
                cin >> pos;
                pos = pos - 1;
                buscar(lista, pos);
            } else {
                cout << "Lista vacia!" << endl;
            }
		}else if(opcion==4){
			if(!isEmpty(lista)){
                cout << "Posicion desde donde desea eliminar" << endl;
                cin >> pos;
                pos = pos - 1;
                eliminar(lista, pos);
            }else{
                cout << "Lista Vacia!" << endl;
            }
		}
	}while(opcion!=5);
	
	getch();
	return 0;
}

bool isEmpty(Nodo *lista){
    return lista == NULL;
}

void buscar(Nodo *lista, int pos){
    Nodo *actual = lista;

    int contador = 0;
    while ( contador < pos){
        contador = contador + 1;
        actual = actual->siguiente;
    }
    if (actual==NULL){
        cout << "\nDato no encontrado" << endl;
    } else {
        cout << "\nEl estudiente es: " << endl;
        cout << actual->dato<< " -  " << actual->nombre<< endl;
    }
}

void insertar(Nodo *&lista, int n, string nom){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->nombre=nom;
	
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
	cout<<"\n";
	while(actual!=NULL){
		cout<<actual->dato<<"-"<<actual->nombre<<endl;
		actual=actual->siguiente;
	}
	cout<<"\n";
}

void eliminar(Nodo *lista, int pos){
    Nodo *actual = lista;

    int cont = 0;
    while ( cont < pos){
        cont = cont + 1;
        actual = actual->siguiente;
    }
    if (actual==NULL){
        cout << "\nDato incorrecto\n";
    } else {
        actual->siguiente=NULL;
        cout << "-->Datos eliminados correctamente\n";
    }
}

class Estudiante{
private:
    string nombre;
    int carne;
};
