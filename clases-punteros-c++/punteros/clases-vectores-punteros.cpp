#include <iostream>
#include <vector>
using namespace std;

class Animal{
    protected:
        int edad;
        string nombre;
    public:
        Animal(int e, string n){ edad = e; nombre = n; };
        void patita(){ cout << "patita!" << endl;  }
};

class Perro : public Animal{
    public:
        Perro(int e, string n) : Animal(e, n){};
        void hablar(){ cout << "Guau, guau!" << endl; }
};

class Gato : public Animal{
    public:
        Gato(int e, string n) : Animal(e, n){};
        void hablar(){ cout << "Miau, miau!" << endl; }
};

int main(){
    //Creamos un vector de Animal para poder guardar cualquier tipo de Animal.
    vector <Animal*> vect;
    Perro *p = new Perro(3, "Max");
    Gato *g = new Gato(5, "Malena");
    vect.push_back(p);
    vect.push_back(g);

    //Convertimos el tipo animal en perro, para poder manejar los metodos de perro
    Perro *p1 = static_cast<Perro*>(vect[0]);
    p1->hablar();

    Gato *g1 = static_cast<Gato*>(vect[1]);
    g1->hablar();

    delete p;
    delete g;

    return 0;
}
