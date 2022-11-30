#include <iostream>
#include <stdlib.h>
using namespace std;

struct Alumno{
    string nombre;
    int edad;
    float promedio;
} alumno[3], *punt_alumno = alumno;

void pedirDatos(){
    for(int i = 0; i < 3; i++ ){
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        getline(cin, (punt_alumno+i)->nombre);
        fflush(stdin);
        cout << "Ingrese la edad: ";
        cin >> (punt_alumno+i)->edad;
        fflush(stdin);
        cout << "Ingrese su promedio: ";
        cin >> (punt_alumno+i)->promedio;
        cout << endl;
        fflush(stdin);
    }
}

void mejorPromedio(Alumno *punt_alumno){
    float mayor = 0.0;
    int pos = 0;
    for(int i = 0; i < 3; i++){
        if((punt_alumno+i)->promedio > mayor) {
            mayor = (punt_alumno+i)->promedio;
            pos = i;
        }
    }

    cout << endl << "Alumno con mejor promedio: " << endl;
    cout << "Nombre: " << (punt_alumno+pos)->nombre << endl;
    cout << "Edad: " << (punt_alumno+pos)->edad << endl;
    cout << "Promedio: " << (punt_alumno+pos)->promedio << endl;
}

int main(){
    pedirDatos();
    mejorPromedio(punt_alumno);
    return 0;
}
