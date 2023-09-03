#include <iostream>

using namespace std;

int main()
{
    // Limpiamos la consola 
    system("cls");
    
    // Declaración de un puntero doble para crear una matriz dinámica de enteros
    int filas = 3;
    int columnas = 4;

    // Declaramos el puntero doble
    int **matriz = new int *[filas];

    // Creación de la matriz dinámica
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }

    // Llenando todas las posiciones de la matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 0;
        }
    }

    // Acedemos e imprimimos los valores de la matriz
    cout << "Imprimiendo matriz: " << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Liberación de la memoria (arreglo doble)
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}