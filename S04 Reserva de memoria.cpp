#include <iostream>
#include <cstdlib> // Libreria necesaria para malloc y free

using namespace std;

int main() 
{
    // Declaramos un puntero
    int *ptr;

    // Reservar memoria para un entero
    ptr = new int;

    // Le asignamos un valor al puntero
    *ptr = 42;

    // Verificamos si se asigno la memoria
    if (ptr != NULL)
    {
        // Utilizamos el valor del puntero
        cout << "Valor del puntero: " << *ptr << endl;
    }
    else
    {
        // Mostramos mensaje de error
        cout << "Error de asignación de memoria";
        exit(1);
    }

    // Liberar la memoria asignada al puntero
    delete ptr;

    return 0;
}