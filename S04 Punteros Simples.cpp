#include <iostream>

using namespace std;

int main()
{
    // Variable normal
    int numero = 42;
    
    // Puntero de la variable
    int *puntero;

    // Asignamos el puntero para 'numero'
    puntero = &numero;

    // Acciones con punteros
    cout  << "Valor de 'numero': " << numero << endl;
    cout << "Direccion de memoria de 'numero': " << &numero << endl;
    cout << "Valor de la 'numero' a traves de puntero: " << *puntero << endl;
    cout << "Direccion almacenada en el puntero: "  << puntero << endl;
    
    return 0;
 }




