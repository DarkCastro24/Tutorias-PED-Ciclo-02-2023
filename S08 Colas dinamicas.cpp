#include <iostream>

using namespace std;

// Creamos la estructura 
struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

// Variables globales
struct Nodo *frenteCola = NULL;
struct Nodo *finalCola = NULL;

// Declaracion de las funciones
bool Vacia(); // Empty
void Insertar(int); // Push
int Eliminar(int &); // Pop
void Imprimir(); // Mostramos todos los elementos de la cola 
void ImprimirFrente(); // Primer elemento ingresado
void ImprimirFinal(); // Ultimo elemento ingresado 

int main()
{
    // Variable para almacenar los valores a ingresar 
    int tamanio;
    
    // Solicitamos el tamaño de la cola 
    cout << "Ingrese el tamanio de la cola: ";
    cin >> tamanio;

    // Llenamos la cola con numeros del 1 al numero ingresado 
    for (int i = 0; i < tamanio; i++)
    {
        Insertar(i+1);
    }

    cout << "\n--->   Datos guardados dentro de la cola   <---\n" << endl;
    
    // Imprimos los datos 
    Imprimir(); 
    cout << endl; 

    // Eliminamos el elemento del frente de la cola (Primer elemento ingresado "1")
    Eliminar(frenteCola->dato);
    
    cout << "Borramos el frente de la cola" << endl;
    // Volvemos a imprimir la cola
    Imprimir();
    cout << endl;
    ImprimirFrente();
    ImprimirFinal(); 
     
    return 0;
}

// Funcion Empty 
bool Vacia()
{
    if (frenteCola == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Push (Agregar al final de la cola)
void Insertar(int n)
{
    // Reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    // Asignacion del valor que ingresa el usuario 
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = NULL;
    if (Vacia())
    {
        frenteCola = nuevoNodo;
    }
    else
    {   
        finalCola->siguiente = nuevoNodo;
    }
    //Se establece el final de la cola con el nuevo nodo agregado
    finalCola = nuevoNodo;
}

// Pop (Eliminar el frente de la cola)
int Eliminar(int &n)
{
    if (!Vacia())
    {
        n = frenteCola->dato;
        struct Nodo *temporal = frenteCola;
        if (frenteCola == finalCola)
        {
            frenteCola = NULL;
            finalCola = NULL;
        }
        else
        {
            frenteCola = frenteCola->siguiente;
        }
        delete temporal;
        return n;
    }
    else
    {
        return -1;
    }
}

// Imprimir todos los elementos de la cola
void Imprimir()
{
    struct Nodo *temporal = frenteCola;
    while (temporal != NULL)
    {
        cout << "Elementos de la cola: " << temporal->dato << endl;
        temporal = temporal->siguiente;
    }
}

// Frente, imprimir elemento del frente de la cola
void ImprimirFrente()
{
    struct Nodo *temporal = frenteCola;
    if (temporal != NULL)
    {
        cout << "Elemento del frente de la cola: " << temporal->dato << endl;
    }
}

// Final, imprimir elemento del final de la cola
void ImprimirFinal()
{
    struct Nodo *temporal = finalCola;
    if (temporal != NULL)
    {
        cout << "Elemento del final de cola: " << temporal->dato << endl;
    }
}