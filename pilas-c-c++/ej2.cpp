/* EJERCICIO 2: hacer un programa en c++ utilizando pilas que contenga el sig. menu:
    1. Insertar un caracter a la pila
    2. Mostrar todos los elementos de la pila
    3. salir
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    char dato;
    Nodo *sig;
};

void menu(int *);
void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char &);

int main(){
    Nodo *pila = NULL;
    char dato; int op;

    do{
        menu(&op);

        switch(op){
            case 1:
                cout << "Ingrese una letra a la pila: "; cin >> dato;
                agregarPila(pila, dato);
            break;
            case 2:
                cout << endl << "Elementos de la pila: ";
                while(pila != NULL){
                    sacarPila(pila, dato);
                    cout << dato;
                }
                cout << endl << endl;
            break;
        }
    } while(op != 3);

    return 0;
}

void agregarPila(Nodo *&pila, char l){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = l;
    nuevo_nodo->sig = pila;
    pila = nuevo_nodo;
    cout << "Elemento agregado correctamente a la pila" << endl << endl;
}

void sacarPila(Nodo *&pila, char &l){
    Nodo *aux = pila;
    l = aux->dato;
    pila = aux->sig;
    delete aux;
}

void menu(int *op){
    cout << "1. Insertar un caracter a la pila" << endl;
    cout << "2. Mostrar todos los elementos de la pila" << endl;
    cout << "3. salir" << endl;
    cout << "res: ";
    cin >> *op;
}
