#include <iostream>
#include <string.h>

using namespace std;

// Funcion con parametro por referencia y valor
int funcion(int *numero, int numero2);

int main()
{
    // Declaracion de variables
    int numero1 = 5;
    int numero2 = 9;
    // El parametro por referencia incluye un &
    funcion(&numero1, numero2);
    // Mostramos los resultados luego de la asignacion de valores
    cout << "Numero 1 es : " << numero1 << endl;
    cout << "Numero 2 es : " << numero2 << endl;
}

// Funcion con un parametro por referencia y otro por valor
int funcion(int *numero, int numero2)
{
    // Asignamos valor por referencia (cambia al original)
    *numero = 10;
    // Asignamos valor a parametro por valor (no afecta al original)
    numero2 = 10;

    return numero2;
}


