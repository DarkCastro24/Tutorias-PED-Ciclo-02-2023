#include <iostream>

using namespace std;

// Constante
#define tamano 5

// Colas circulares 
struct Nodo
{
    int frenteCola;
    int finalCola;
    int elemento[tamano];
} nodo;

// Declaracion de funciones / creacion de prototipo
void Crear(struct Nodo *); // Encolar 
bool Vacia(struct Nodo *); // Empty
int Llena(Nodo *);
void Insertar(struct Nodo *, int); // Push encolar 
void Eliminar(struct Nodo *); // Pop desencolar
int Dimension(Nodo *); // Size

int main()
{
    system("cls");
    // Inicializamos la cola 
    Crear(&nodo);
    // Mostramos mensaje para indicar que comenzaremos a imprimir mensajes 
    cout << "--->   Imprimiendo los elementos de la cola circular   <---" << endl << endl;
    // Insertamos 5 elementos a la cola 
    Insertar(&nodo, 1);
    Insertar(&nodo, 2);
    Insertar(&nodo, 3);
    Insertar(&nodo, 4);
    Insertar(&nodo, 5);
    // Imprimimos el frente y el final de la cola (primer y ultimo elemento ingresado)
    cout << endl << "Frente de la cola en la posicion: " << nodo.frenteCola << " numero almacenado " << nodo.elemento[nodo.frenteCola] << endl;
    cout << "Final de la cola en la posicion: " << nodo.finalCola << " numero almacenado " << nodo.elemento[nodo.finalCola] << endl << endl;
    // Eliminamos el frente de la cola 
    Eliminar(&nodo);
    cout << "Eliminamos el frente de la cola!!!! \n\n";
    // Ingresamos un nuevo elemento a la cola (al final)
    Insertar(&nodo, 6);
    cout << endl;
    // Nuevamente imprimimos los datos del frente y el final de la cola 
    cout << "Nuevo frente de la cola en la posicion: " << nodo.frenteCola << " numero almacenado " << nodo.elemento[nodo.frenteCola] << endl;
    cout << "Nuevo final de la cola en la posicion: " << nodo.finalCola << " numero almacenado " << nodo.elemento[nodo.finalCola] << endl << endl;
    // Eliminamos dos elementos de la cola 
    Eliminar(&nodo);
    Eliminar(&nodo);
    // Agregamos dos elementos al final de la cola 
    Insertar(&nodo, 7);
    Insertar(&nodo, 8);
    cout << endl;
    // Nuevamente imprimimos los datos del frente y el final de la cola 
    cout << "Nuevo frente de la cola en la posicion: " << nodo.frenteCola << " numero almacenado " << nodo.elemento[nodo.frenteCola] << endl;
    cout << "Nuevo final de la cola en la posicion: " << nodo.finalCola << " numero almacenado " << nodo.elemento[nodo.finalCola] << endl;
    return 0;
}

// Inicializamos un cola vacia
void Crear(Nodo *p)
{
    p->frenteCola = -1;
    p->finalCola = -1;
}

// Verificamos si la cola esta vacia
bool Vacia(Nodo *p)
{
    if (p->finalCola == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Obtenemos el tamaño de la cola 
int Dimension(Nodo *p)
{
    if (Vacia(p))
    {
        return 0;
    }
    else
    {
        if (p->frenteCola <= p->finalCola)
        {
            return p->finalCola - p->frenteCola + 1;
        }
        else
        {

            return tamano - p->frenteCola + p->finalCola + 1;
        }
    }
}

// Validamos si la cola esta llena
int Llena(Nodo *p)
{
    if (Dimension(p) == tamano)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Encolar -- final de la lista
void Insertar(Nodo *p, int n)
{
    if (!Llena(p))
    {
        if (Vacia(p))
        {
            p->frenteCola = 0;
        }
        if (p->finalCola == tamano - 1)
        {
            p->finalCola = 0;
        }
        else
        {
            p->finalCola++;
        }
        p->elemento[p->finalCola] = n;
        cout << "El numero " << n << " se ingreso en la cola!!!" << endl;
    }
    else
    {
        cout << "Cola llena";
    }
}

// Desencolar -- inicio de la lista
void Eliminar(Nodo *p)
{
    if (!Vacia(p))
    {
        if (Dimension(p) == 1)
        {
            Crear(p);
        }
        else
        {
            p->frenteCola++;
        }
    }
    else
    {
        cout << "Cola esta vacia";
    }
}