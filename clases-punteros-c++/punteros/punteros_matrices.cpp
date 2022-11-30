#include <iostream>
using namespace std;

int **matriz1, **matriz2, nFilas, nCol;

void pedirDatos();
void sumarMatrices(int **, int **, int, int);
void mostrarSumaMatrices(int **, int, int);

int main(){
    pedirDatos();
    sumarMatrices(matriz1, matriz2, nFilas, nCol);
    mostrarSumaMatrices(matriz1, nFilas, nCol);

    for(int i = 0; i < nFilas; i++) delete [] matriz1[i];
    delete [] matriz1;
    delete [] matriz2;
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el numero de filas para sus matrices: "; cin >> nFilas;
    cout << "Ingrese el numero de columnas para sus matrices: "; cin >> nCol;

    matriz1 = new int*[nFilas];
    matriz2 = new int*[nFilas];

    for(int i = 0; i < nFilas; i++){
        matriz1[i] = new int[nCol];
        matriz2[i] = new int[nCol];
    }

    cout << endl << "Ingrese los numeros de la matriz1"<< endl;
    for(int j = 0; j < nFilas; j++){
        for(int k = 0; k < nCol; k++){
            cout << "Ingrese el numero de la posicion [" << j << "]" << "[" << k << "]" << ": ";
            cin >> *(*(matriz1+j)+k);
        }
    }

    cout << endl << "Ingrese los numeros de la matriz2"<< endl;
    for(int j = 0; j < nFilas; j++){
        for(int k = 0; k < nCol; k++){
            cout << "Ingrese el numero de la posicion [" << j << "]" << "[" << k << "]" << ": ";
            cin >> *(*(matriz2+j)+k);
        }
    }

}

void sumarMatrices(int **matriz1, int **matriz2, int nFilas, int nCol){
    cout << endl <<  "Matriz1 + matriz2: " << endl;
    for(int j = 0; j < nFilas; j++)
        for(int k = 0; k < nCol; k++) *(*(matriz1+j)+k) += *(*(matriz2+j)+k);
};

void mostrarSumaMatrices(int **matriz1, int nFilas, int nCol){
    for(int j = 0; j < nFilas; j++){
        for(int k = 0; k < nCol; k++) cout << *(*(matriz1+j)+k) << " ";
        cout << endl;
    }
}
