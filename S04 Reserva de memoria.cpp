#include <iostream>

using namespace std;

int main()
{
    // Creamos un puntero
    int *ptr;
    // Inicializamos el puntero (Reservamos memoria)
    ptr = new int;
    // Asignamos el valor al puntero
    *ptr = 42;

    // Validamos si el puntero tiene memoria asignada 
    if (ptr == NULL)
    {
        // Si no tiene memoria es null y mostramos el mensaje
        cout << "Error de asignacion de memoria!!!!";
        // Finalizamos la ejecucion del programa
        exit(1);
    }
    else
    {
        // Mostramos el valor del puntero si existe direccion de memoria
        cout << "Valor del puntero: " << *ptr  << endl;
    }
    // Liberamos la memoria
    delete ptr;
}