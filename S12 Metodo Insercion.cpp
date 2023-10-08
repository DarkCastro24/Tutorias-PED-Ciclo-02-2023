#include <iostream>

using namespace std;

// Predeclaracion de funciones
void metodoInsercion(int arr[], int n);
void imprimirArreglo(int arr[], int n);

int main()
{
    // Arreglo desordenado 
    int arr[] = {25, 16, 65, 4, 10};
    // Obtenemos el tamaño del arreglo 
    int n = sizeof(arr) / sizeof(arr[0]);
    // Imprimimos el arreglo antes de ordenar
    cout << "Arreglo antes de ordenar: ";
    imprimirArreglo(arr, n);
    // Ordenamos el arreglo con el metodo insercion
    metodoInsercion(arr, n);
    // Imprimos el arreglo ordenado
    cout << "Arreglo despues de ordenar: ";
    imprimirArreglo(arr, n);
    return 0;
}

// Metodo de ordenamiento por insersion
void metodoInsercion(int arr[], int n)
{
    // Declaramos dos variables auxiliares
    int key, j;
    // Recorremos el arreglo con un for 
    for (int i = 1; i < n; i++)
    {
        // Key contiene el valor de la posicion actual
        key = arr[i];
        j = i - 1;
        // Mueve los elementos de arr[0...i-1] que son mayores que la llave
        // a una posición adelante de su posición actual
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Metodo para imprimir el arreglo
void imprimirArreglo(int arr[], int n)
{
    // Recorremos el arreglo
    for (int i = 0; i < n; i++)
    {
        // Vamos imprimiendo cada una de sus posiciones
        cout << arr[i] << " ";
    }
    cout << endl;
}
