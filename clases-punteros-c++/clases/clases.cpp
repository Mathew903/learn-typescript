#include "Persona.h"
#include <iostream>
using namespace std;

int main(){
    Estudiante *e = new Estudiante("Matias", "Garcia", 18, "ingenieria electrica", 2);
    e->mostrar();
    return 0;
}

