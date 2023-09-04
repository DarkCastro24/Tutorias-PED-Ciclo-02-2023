#include <iostream>

using namespace std;

int main()
{
    // Variable para almacenar el tamaño del arreglo
    int tamanio;

    // Se solicita el tamaño del arreglo al usuario 
    cout  << "Ingrese el tamanio del arreglo: " << endl;
    cin >> tamanio;

    // Creamos el arreglo dinamico con el tamaño ingresado anteriormente
    int *arreglo = new int[tamanio];

    // Llenamos el arreglo 
    for (int i = 0; i < tamanio; i++)
    {
        arreglo[i] = i + 1;
    }

    // Mostramos mensaje 
    cout << "Imprimiendo numeros del arreglo: ";

    // Imprimimos el contenido del arreglo
    for (int i = 0; i < tamanio; i++)
    {
        cout << arreglo[i] << "  ";
    }
    
    // Liberamos la memoria 
    delete[] arreglo;
}
    