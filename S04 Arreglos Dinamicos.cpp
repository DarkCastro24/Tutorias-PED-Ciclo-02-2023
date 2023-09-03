#include <iostream>

using namespace std;

int main()
{
    // Variable para guardar el tamaño del arreglo
    int tamanio;

    // Solicitamos el tamaño del arreglo
    cout << "Ingrese el tamanio del arreglo dinamico: ";
    cin >> tamanio;

    // Creamos el arreglo dinamico
    int *arreglo = new int[tamanio];

    // Asignamos los valores al arreglo dinámico
    for (int i = 0; i < tamanio; i++)
    {
        arreglo[i] = i + 1;
    }

    // Acceder e imprimir los valores
    for (int i = 0; i < tamanio; i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Liberacion de memoria
    delete[] arreglo;

    return 0;
}