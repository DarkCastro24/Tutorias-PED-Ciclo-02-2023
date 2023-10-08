#include <iostream>

using namespace std;

// Predeclaracion de funciones
void metodoBurbuja(int[], int n);
void imprimirArray(int[], int size);

int main()
{
    // Arreglo desordenado
    int arreglo[] = {64, 34, 27, 15, 22, 5, 90};
    // Obteniendo el tamaño del arreglo
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    // Imprimiendo el arreglo desordenado
    cout << "Array desordenado: ";
    imprimirArray(arreglo, n);
    // Ordenamos el arreglo
    metodoBurbuja(arreglo, n);
    // Volvemos a imprimir el arreglo ordenado
    cout << "Array ordenado: ";
    imprimirArray(arreglo, n);
    return 0;
}

// Funcion para imprimir el arreglo
void imprimirArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Metodo para ordenar el arreglo utilizando el metodo de la burbuja
void metodoBurbuja(int arr[], int n)
{
    // Para cada elemento
    for (int i = 0; i < n - 1; i++)
    {
        // Comparamos con el siguiente
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Intercambio si el elemento es mayor que el siguiente
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
