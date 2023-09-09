#include <iostream>

using namespace std;

// Definición de constante
#define tam_max 20

void CrearPila(struct Pila *);
int Vacia(struct Pila *);
int Llena(struct Pila *);
void Agregar(struct Pila *, int);
void Borrar(struct Pila *);

struct Pila
{
    // Define el ultimo elemento que entra
    int cima;
    int elemento[tam_max];
} pila;

int main()
{

    CrearPila(&pila);
    Agregar(&pila, 3);
    Agregar(&pila, 4);
    Agregar(&pila, 7);
    Borrar(&pila);
    cout << "Ultimo" << pila.elemento[pila.cima];
    return 0;
}

// Crear pila
void CrearPila(Pila *p)
{
    // Pila esta vacia
    p->cima = -1;
}

// Pila vacia
int Vacia(Pila *p)
{
    if (p->cima == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
} 

// Pila llena
int Llena(Pila *p)
{
    // Evalua el máximo de elementos del arreglo
    if (p->cima == tam_max - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Push
void Agregar(Pila *p, int n)
{
    if (!Llena(p))
    {
        p->cima++;
        // indice indica la posicion del array en el tope
        p->elemento[p->cima] = n;
        // cout<<n;
        cout << p->elemento[p->cima] << endl;
    }
    else
    {
        cout << "No se pueden agregar mas elementos";
    }
}

// Pop
void Borrar(Pila *p)
{
    if (!Vacia(p))
    {
        int temporal = p->cima;
        p->cima--;
        cout << "Elemento borrado";
    }
    else
    {
        cout << "Pila esta vacía";
    }
}