#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
};

void insertarElemento(Nodo *&, int);
void mostrarLista(Nodo *);
void eliminarNodo(Nodo *&);
void buscarNodo(Nodo *, int d);
void vaciarLista(Nodo *&);

void menu(int *op){
    cout << "----Menu----" << endl;
    cout << "1. Insertar un elemento a la lista" << endl;
    cout << "2. Eliminar un elemento de la lista" << endl;
    cout << "3. Buscar un elemento de la lista" << endl;
    cout << "4. Vaciar lista" << endl;
    cout << "5. Mostrar lista" << endl;
    cout << "6. Salir" << endl;
    cout << "res: ";
    cin >> *op;
};

int main(){
    Nodo *lista = NULL;
    int dato, op;
    do{
        menu(&op);
        switch(op){
            case 1:
                system("cls");
                cout << "Ingrese un dato a la lista: ";
                cin >> dato;
                insertarElemento(lista, dato);
            break;
            case 2:
                system("cls");
                cout << "Ingrese el dato a eliminar: ";
                cin >> dato;
                eliminarNodo(lista, dato);
            break;
            case 3:
                system("cls");
                cout << "Ingrese el dato que busca: ";
                cin >> dato;
                buscarNodo(lista, dato);
            break;
            case 4:
                system("cls");
                vaciarLista(lista);
            break;
            case 5:
                system("cls");
                mostrarLista(lista);
            break;
        }
        system("cls");
    } while(op != 6);
    return 0;
}

void insertarElemento(Nodo *&lista ,int d){
    Nodo *nuevo_nodo = new Nodo(); //creamos un nuevo nodo
    nuevo_nodo->dato = d; //asignamos el dato al nodo

    Nodo *aux1 = lista, *aux2; //creamos 2 nodos auxiliares

    //Corroboramos si el dato es menor o mayor, para ordenarlo en la lista
    while(aux1 != NULL && aux1->dato < d ){
        aux2 = aux1;
        aux1 = aux1->sig;
    }

    //condicion para colocar el dato al principio, porque es menor
    if(lista == aux1) lista = nuevo_nodo;
    else aux2->sig = nuevo_nodo; //colocamos el dato en medio o al final

    nuevo_nodo->sig = aux1;

    cout << "Numero " << d << " insertado exitosamente en la lista!" << endl << endl;
    system("pause");
}

void mostrarLista(Nodo *lista){
    if(lista == NULL) cout << "La lista esta vacia!!" << endl << endl;
    else{
        Nodo *aux = lista;
        cout << endl << "Lista: ";
        while(aux != NULL){
            cout << aux->dato << " ";
            aux = aux->sig;
        }
        cout << endl << endl;
    }
    system("pause");
}

void eliminarNodo(Nodo *&lista){
    if(lista == NULL) cout << "La lista esta vacia, no se puede eliminar nada." << endl << endl;
    else{
        Nodo *aux = lista;
        Nodo *anterior = NULL;
        int d = aux->dato;
        lista = aux->sig;
        delete aux;
        cout << "Elemento " << d << " eliminado de la lista" << endl;
    }
    system("pause");
};

void vaciarLista(Nodo *&lista){
    if(lista == NULL) cout << "La lista ya se encuentra vacia." << endl << endl;
    else{
        while(lista != NULL) eliminarNodo(lista);
        if(lista == NULL) cout << endl << "Lista vaciada correctamente!!" << endl << endl;
        else cout << "Error al vaciar la lista" << endl << endl;
    }
    system("pause");
}

void buscarNodo(Nodo *lista, int d){
    if(lista == NULL) cout << "La lista se encuentra vacia!!" << endl << endl;
    else{
        Nodo *aux = lista;
        bool estar = false;

        while(aux != NULL && aux->dato <= d){
            if(aux->dato == d) estar = true;
            aux = aux->sig;
        }

        if(estar) cout << "El numero " << d << " se encuentra en la lista!!" << endl << endl;
        else cout << "El numero " << d << " no se encuentra en la lista." << endl << endl;
    }
    system("pause");
}
