#include <iostream>
using namespace std;

class Gas{
    private:
        string articulos;
        string clientes;
        string empleados;
        char referencia;
    public:
        Gas();
        //Gas(string, char);
        string getArticulos();
        string getClientes();
        void cargarArticulos(string);
        void cargarEmpleados(string);
        void cargarClientes(string);

};


/*Gas::Gas(string g, char r){
    switch(r){
        case 'a':
            articulos = g;
            break;
        case 'c':
            clientes = g;
            break;
        case 'e':
            empleados = g;
            break;
        default:
            break;
    }
}*/

Gas::Gas(){};

string Gas::getArticulos(){
    return articulos;
}

void Gas::cargarArticulos(string art){
    articulos = art;
}

void Gas::cargarClientes(string cli){
    clientes = cli;
}

string Gas::getClientes(){
    return clientes;
}

void menu(){
    int op;
    cout << "----- Bienvenidos a GAS -----" << endl << endl;
    cout << "1. Cargar articulos" << endl << "2. Cargar clientes" << endl << "3. Cargar empleados" << endl;
    cout << endl <<"Elija la opcion: ";
    cin >> op;

    switch(op){
        case 1:{
            string art;
            int cantArt;
            cout << "Cuantos articulos quiere ingresar: ";
            cin >> cantArt;
            Gas *g = new Gas[cantArt];

            for(int i = 0; i < cantArt; i++){
                cout << "Ingrese un articulo: ";
                cin >> art;
                g[i].cargarArticulos(art);
                fflush(stdin);
            }

            for(int i = 0; i < cantArt; i++){
                cout << "Articulo" << i + 1 << ": " <<  g[i].getArticulos() << endl << endl ;
            }
            menu();
            } break;
        case 2:{
            string cli;
            int cantCli;
            cout << "Cuantos clientes quiere ingresar: ";
            cin >> cantCli;
            Gas *g = new Gas[cantCli];

            for(int i = 0; i < cantCli; i++){
                cout << "Ingrese un cliente: ";
                cin >> cli;
                g[i].cargarClientes(cli);
                fflush(stdin);
            }

            for(int i = 0; i < cantCli; i++){
                cout << "Articulo" << i + 1 << ": " <<  g[i].getClientes() << endl;
            }
        } break;
        case 3:{
            string emp;
            int cantEmp;
            cout << "Cuantos empleados quiere ingresar: ";
            cin >> cantCli;
            Gas *g = new Gas[cantCli];

            for(int i = 0; i < cantCli; i++){
                cout << "Ingrese un cliente: ";
                cin >> cli;
                g[i].cargarClientes(cli);
                fflush(stdin);
            }

            for(int i = 0; i < cantCli; i++){
                cout << "Articulo" << i + 1 << ": " <<  g[i].getClientes() << endl;
            }
        } break;
    }

}

int main(){
    menu();
    return 0;
}
