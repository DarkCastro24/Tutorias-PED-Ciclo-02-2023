#include <iostream>

using namespace std;

int main()
{
    // Limpiamos la consola
    system("cls");

    // Variables para definir el numero de filas y columnas
    int filas = 5;
    int columnas = 5;

    // Inicializamos la matriz con el valor de las filas
    int **matriz = new int *[filas];
    
    // Posteriormente asignamos las columas recorriendo las "filas"
    for (int i = 0; i < filas; i++)
    {
        // Aca inicializamos con el valor de las columnas
        matriz[i] = new int[columnas];
    }

    // Afuera evaluamos las filas 
    for (int i = 0; i < filas; i++)
    {
        // Adentro evaluamos columnas
        for (int j = 0; j < columnas; j++)
        {
            // I representa la fila actual y J la columna actual
            matriz[i][j] = 0;
        }
    }

    cout << "Imprimiendo matriz: " << endl;
    // Afuera evaluamos las filas 
    for (int i = 0; i < filas; i++)
    {
        // Adentro evaluamos columnas
        for (int j = 0; j < columnas; j++)
        {
            // Primero filas i y luego columnas j
            cout << matriz[i][j] << " ";
        }
        // Colocamos salto de linea al terminar de imprimir las columnas de una fila 
        cout << endl;    
    }

    // Liberar la memoria del arreglo doble dinamico (necesitamos unicamente las filas)
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }

    // Liberamos la matriz 
    delete[] matriz;
}