#include<iostream>

using namespace std;

// Declaracion de funciones 
void metodoSeleccion(int arr[], int n);
void imprimirArreglo(int arr[], int n);

int main() {
    // Arreglo desordenado 
    int arr[] = {64, 44, 29, 5, 22, 31, 70};
    // Obtenemos el tamaño del arreglo
    int n = sizeof(arr) / sizeof(arr[0]);
    // Imprimimos el arreglo antes de ordenar
    cout << "Arreglo antes de ordenar: ";
    imprimirArreglo(arr, n);
    // Ordenamos el arreglo con el metodo seleccion
    metodoSeleccion(arr, n);
    // Imprimimos el arreglo ordenado 
    cout << "Arreglo despues de ordenar: ";
    imprimirArreglo(arr, n);
    return 0;
}

// Metodo de ordenamiento seleccion 
void metodoSeleccion(int arr[], int n) {
    int j, min_idx;
    // Recorre todos los elementos del arreglo
    for (int i = 0; i < n-1; i++) {
        // Encuentra el mínimo elemento en el arreglo desordenado
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Intercambia el elemento mínimo encontrado con el primer elemento
        swap(arr[min_idx], arr[i]);
    }
}

// Metodo para imprimir 
void imprimirArreglo(int arr[], int n) {
    // Recorremos el arreglo 
    for (int i = 0; i < n; i++) {
        // Imprimimos cada elemento
        cout << arr[i] << " ";
    }
    cout << endl;
}