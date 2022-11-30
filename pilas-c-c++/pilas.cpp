#include <iostream>
#include <stdlib.h>
using namespace std;

/* Concepto de una pila
Una pila es una estructura de datos de entradas ordenadas tales que solo se puede
introducir y eliminar por un extremo, llamado cima.
*/

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int dato;
    cout << "Ingrese el dato 1: "; cin >> dato;
    agregarPila(pila, dato);

    cout << "Ingrese el dato 2: "; cin >> dato;
    agregarPila(pila, dato);

    cout << endl << "Sacando los elementos de la pila: ";
    while(pila != NULL){ //Mientas no sea el final de la pila
        sacarPila(pila, dato);
        if(pila != NULL) cout << dato << ", ";
        else cout << dato << ".";
    }

    return 0;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
