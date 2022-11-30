#ifndef Persona_h
#define Persona_h

#include <iostream>
using namespace std;

class Persona{
    protected:
        int edad;
        string nombre;
        string apellido;
    public:
        Persona(string, string, int);
        virtual void mostrar();
};

class Estudiante : public Persona{
    private:
        string carrera;
        int anio;
    public:
        Estudiante(string, string, int, string, int);
        void mostrar();
};

#include "Persona.cpp"

#endif
