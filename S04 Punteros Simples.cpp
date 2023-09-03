#include <iostream>

using namespace std;

int main() 
{
    // Declaramos una variable
    int numero = 42;
    // Declaración del puntero a la variable
    int *puntero; 

    // Asignación de la dirección de memoria de 'numero' al puntero
    puntero = &numero; 

    // Formas de mostrar informacion del puntero
    cout << "Valor de 'numero': " << numero << endl;
    cout << "Dirección de 'numero': " << &numero << endl;
    cout << "Valor a través del puntero: " << *puntero << endl;
    cout << "Dirección almacenada en el puntero: " << puntero << endl;

    return 0;
}






