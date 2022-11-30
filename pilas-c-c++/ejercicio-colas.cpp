#include <iostream>
using namespace std;

struct Nodo{
    char dato;
    Nodo *sig;
};

void insertarCola(Nodo *&, Nodo *&, char);
void eliminarCola(Nodo *&, Nodo *&);
void mostrarCola(Nodo *);

int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    char l; int op;

    do{

        cout << "1. Insertar un caracter a una cola" << endl;
        cout << "2. Eliminar elemento de la cola" << endl;
        cout << "3. Mostrar todos los elementos de la cola" << endl;
        cout << "4. Salir" << endl;
        cout << "res: ";
        cin >> op;

        switch(op){
            case 1:
                system("cls");
                cout << "Ingrese un caracter: ";
                cin >> l;
                insertarCola(frente, fin, l);
            break;
            case 2:
                system("cls");
                eliminarCola(frente, fin);
            break;
            case 3:
                system("cls");
                mostrarCola(frente);
            break;
        }
        system("cls");
    } while(op != 4);

    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, char l){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = l;
    nuevo_nodo->sig = NULL;

    if(frente==NULL) frente = nuevo_nodo;
    else fin->sig = nuevo_nodo;

    fin = nuevo_nodo;

    cout << "Elemento creado exitosamente!" << endl << endl;
    system("pause");
};

void eliminarCola(Nodo *&frente, Nodo *&fin){
    Nodo *aux = frente;
    if(frente==fin){
        frente = NULL;
        fin = NULL;
    }
    else frente = frente->sig;

    delete aux;

    cout << "Elemento eliminado de la cola exitosamente!" << endl << endl;
    system("pause");
}

void mostrarCola(Nodo *frente){
    if(frente == NULL) cout << "La cola esta vacia!!" << endl;
    else{
        Nodo *aux = frente;
        cout << "Elementos de la cola: ";
        while(frente != NULL){
            cout << aux->dato;
            aux = aux->sig;
        }

        system("pause");
    }
}
