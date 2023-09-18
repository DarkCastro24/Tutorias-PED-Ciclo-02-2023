#include <iostream>

using namespace std;

// Tamaño constante de la cola
#define tamano 5

// Estructura de datos
struct Nodo
{
    int frenteCola;
    int finalCola;
    int elemento[tamano];
} nodo;

// Declaracion de funciones de colas
void Crear(struct Nodo *);
bool Vacia(struct Nodo *);
int Llena(Nodo *);
void Insertar(struct Nodo *, int);
void Mover(struct Nodo *);
void Eliminar(struct Nodo *);

int main()
{
    system("cls");
    // Creamos la cola
    Crear(&nodo);
    // Insertamos elementos en la cola
    Insertar(&nodo, 1);
    Insertar(&nodo, 2);
    Insertar(&nodo, 3);
    Insertar(&nodo, 4);
    cout << "---->  Mostrando datos de la cola  <----" << endl<< endl;
    // Imprimos el frente y final de la cola
    cout << "Frente de la cola en la posicion " << nodo.frenteCola << " Elemento " << nodo.elemento[nodo.frenteCola] << endl;
    cout << "Final de la cola en la posicion " << nodo.finalCola << " Elemento " << nodo.elemento[nodo.finalCola] << endl << endl;
    // Eliminamos el primer registro de la cola
    Eliminar(&nodo);
    cout << "---->  Eliminamos el primer elemento ingresado  <----" << endl << endl;
    // Mostramos los nuevos datos
    cout << "Frente de la cola en la posicion " << nodo.frenteCola << " Elemento " << nodo.elemento[nodo.frenteCola] << endl;
    cout << "Final de la cola en la posicion " << nodo.finalCola << " Elemento " << nodo.elemento[nodo.finalCola] << endl;
    return 0;
}

// Creamos una cola vacía
void Crear(Nodo *p)
{
    // Inicializamos la cola
    p->frenteCola = -1;
    p->finalCola = -1;
}

// Validamos si la cola esta vacia
bool Vacia(Nodo *p)
{
    // Sabemos si esta vacia cuando el final de la cola sea -1
    if (p->finalCola == -1)
    {
        return true;
    }
    else
    {
        // Si no es -1 entonces no esta vacia
        return false;
    }
}

// Validamos si la cola esta llena
int Llena(Nodo *p)
{
    // Si tiene el tamaño de la constante menos uno esta llena
    if (p->finalCola == tamano - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Encolar -- agregamos elemento al final de la lista
void Insertar(Nodo *p, int n)
{
    if (!Llena(p))
    {
        // Si la cola esta vacia
        if (Vacia(p))
        {
            p->frenteCola = 0;
        }
        // Agregamos un nuevo elemento a la cola
        p->finalCola++;
        p->elemento[p->finalCola] = n;
    }
    else
    {
        cout << "Cola esta llena";
    }
}

// Correr elementos
void Mover(Nodo *p)
{
    for (int i = 1; i <= p->finalCola; i++)
    {
        // Desplazamos una posicion el elemento
        p->elemento[i - 1] = p->elemento[i];
    }
    // Restamos uno al final de la cola (al haber eliminado el elemento)
    p->finalCola--;
}

// Desencolar -- inicio de la lista
void Eliminar(Nodo *p)
{
    if (!Vacia(p))
    {
        // Si se elimina el ultimo elemento
        if (p->finalCola == 0)
        {
            // Inicializamos la cola
            p->frenteCola = -1;
            p->finalCola = -1;
        }
        else
        {
            // Movemos los elementos dentro de la cola
            Mover(p);
        }
    }
    else
    {
        cout << "Cola esta vacia";
    }
}