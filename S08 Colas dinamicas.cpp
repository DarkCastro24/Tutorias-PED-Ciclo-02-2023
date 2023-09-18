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
bool Vacia();
void Insertar(int);
int Eliminar(int &);
void Imprimir();
void ImprimirFrente();
void ImprimirFinal();

int main()
{
    int valor;
    cout << "Ingresar valor";
    cin >> valor;
    Insertar(valor);
    cout << "Ingresar valor";
    cin >> valor;
    Insertar(valor);
    Imprimir();
    Eliminar(valor);
    Imprimir();
    ImprimirFrente();
    ImprimirFinal(); 
    return 0;
}

// Operación vacia
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

// Encolar -- final de la lista
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

// Desencolar -- inicio de la lista
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

// Imprimir elementos de la cola
void Imprimir()
{
    struct Nodo *temporal = frenteCola;
    while (temporal != NULL)
    {
        cout << "Elementos de la cola" << temporal->dato << endl;
        temporal = temporal->siguiente;
    }
}

// Frente, imprimir elemento del frente de la cola
void ImprimirFrente()
{
    struct Nodo *temporal = frenteCola;
    if (temporal != NULL)
    {
        cout << "Frente cola" << temporal->dato;
    }
}

// Final, imprimir elemento del final de la cola
void ImprimirFinal()
{
    struct Nodo *temporal = finalCola;
    if (temporal != NULL)
    {
        cout << "Final cola" << temporal->dato;
    }
}