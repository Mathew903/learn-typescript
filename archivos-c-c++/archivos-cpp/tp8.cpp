#include <iostream>
using namespace std;
#define MAX 100

typedef struct{
    string nombre, carrera;
    int anio;
} Alumnos;


void cargarAlumnos(Alumnos []);

int main(){
    Alumnos a[MAX];
    cargarAlumnos(a);

    return 0;
}

void cargarAlumnos(Alumnos a[]){

}
