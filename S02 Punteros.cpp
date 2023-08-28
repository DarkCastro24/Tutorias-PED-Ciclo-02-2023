#include <iostream>

using namespace std;

int main()
{
    // Declaración de una variable tipo entero
    int a = 5;
    // Declaracion de puntero
    int *p;
    // Asignando valor al puntero
    p = &a;
    // Imprimiendo la direccion de memoria de la variable a
    cout << p << endl;
    // Imprimiendo el valor de a
    cout << *p;
}