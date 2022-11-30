#include <iostream>
using namespace std;
/* int *arr, cant;

void llenarArr(){
    cout << "Ingresa la cantidad de numeros a ingresar: ";
    cin >> cant;
    arr = new int[cant];
    for(int i = 0; i < cant; i++){
        cout << "Numero" << i + 1 << ": ";
        cin >> arr[i];
    };
    cout << endl;
}

void mostrarArr(){
    cout << "-----Numeros-----" << endl;
    for(int i = 0; i < cant; i++){
        cout << arr[i] << " ";
    }
}
*/
/* void intercambiar(int *n1, int *n2){
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}
*/

int hallarMax(int *arr, int cant){
    int maximo = 0;
    for(int i = 0; i < cant; i++)
        if(*(arr+i) > maximo) maximo = *(arr+i);
    return maximo;
}

int main(){
    /* array y punteros
    int nums[] = {12,23,41,123,41,1};

    int *copy_arr = nums;

    for(int i = 0; i < 6; i++){
        cout << *copy_arr++ << endl;
    }
    */
    /* Asignacion dinamica de arrays
    llenarArr();
    mostrarArr();
    delete[] arr;
    */
    /* Transmicion de direcciones
    int num1 = 20, num2 = 34;
    cout << "Num1: " << num1 << ", Num2: " << num2 << endl;
    intercambiar(&num1, &num2);
    cout << "Num1: " << num1 << ", Num2: " << num2;
    */
    //Transmicion de arreglos
    const int cant = 6;
    int arr[cant] = {12,3,412,1,2,3};
    cout << "El numero mas grande del array es: " << hallarMax(arr, cant);

    return 0;
}
