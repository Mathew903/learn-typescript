#include <iostream>
using namespace std;

int main(){

    /* problema 1
    int dato = 5;

    int *p1, p2; //p2 debe ser un puntero

    p1 = &dato;
    p2 = p1;

    cout << *p2;
    */

    /*problema 2*/
    double d = 5.4, e = 1.2, f = 0.9;
    double *p1, *p2, p3;
    p1 = &d;
    *p1 += 3;
    p2 = &e;
    p3 = (*p1) + (*p2);
    cout << *p1 << " " << *p2 << " " << p3;

    return 0;
}
