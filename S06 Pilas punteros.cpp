#include <iostream>

using namespace std;

struct Nodo *pila = NULL;

// Declarando funciones 
void Insertar(int);
void EliminarUltimo(int &);
void Imprimir();
bool Vacia();
int UltimoElemento();

struct Nodo
{
    int elemento;
    struct Nodo *siguiente;
};

int main()
{
    int valor;
    cout << "Ingrese un valor: ";
    cin >> valor;
    Insertar(valor);
    // Retorno 0 es igual a FALSE
    cout << "Estado de la pila: " << Vacia() << endl;
    Imprimir();
    EliminarUltimo(valor);
    // Retorno 1 es igual a TRUE
    cout << "Estado de la pila: " << Vacia() << endl;
    return 0;
}

void Insertar(int numero)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->elemento = numero;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

bool Vacia()
{
    return pila == NULL;
}

void Imprimir()
{
    struct Nodo *temporal = pila;
    while (temporal != NULL)
    {
        cout << "Elementos de la pila " << temporal->elemento << endl;
        temporal = temporal->siguiente;
    }
    
}

int UltimoElemento() 
{
    if (pila == NULL)
    {
        return -1;
    }
    else
    {
        return pila->elemento;
    }
    
}

// Operacion POP
void EliminarUltimo(int &n)
{
    if (pila != NULL)
    {
        struct Nodo *temporal = pila;
        n = temporal->elemento;
        pila = temporal->siguiente;
        delete temporal;
    }
    
}