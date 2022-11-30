#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(string n, string a, int e){
    nombre = n;
    apellido = a;
    edad = e;
}

void Persona::mostrar(){
    cout << nombre << " " << apellido << ", edad: " << edad << endl;
}

Estudiante::Estudiante(string n, string a, int e, string c, int an) : Persona(n, a, e){
    carrera = c;
    anio = an;
}

void Estudiante::mostrar(){
    Persona::mostrar();
    cout << "Carrera: " << carrera << ", anio: " << anio;
}
