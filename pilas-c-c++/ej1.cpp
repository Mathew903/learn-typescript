#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int dato; char res;
    do{
        cout << "Ingrese un dato a la pila: "; cin >> dato;
        agregarPila(pila, dato);
        cout << "Desea agregar otro dato a la pila(s/n): "; cin >> res;
        cout << endl;
    }
    while(res == 'S' || res == 's');


    //sacar pila y mostrar elementos
    while(pila != NULL){
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
    cout << "Dato agregado correctamente a la pila" << endl << endl;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
