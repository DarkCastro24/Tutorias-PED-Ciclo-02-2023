#include <iostream>

using namespace std;

// Declaracion de constante 
#define tam_max 20

// Inicializacion de funciones 
void CrearPila(struct Pila*);
int Vacia(struct Pila*);
int Llena(struct Pila*);
void Agregar(struct Pila*, int);
void Borrar(struct Pila *);

// Creamos la estructura que agregarmos a la Pila (Nodo)
struct Pila
{
    // Indice del ultimo elemento ingresado
    int cima;
    // Aca se almacenan los valores 
    int elemento[tam_max];
} pila;

int main()
{
    // Inicializamos la pila en -1
    CrearPila(&pila);
    // Agregamos 3 elementos (push)
    Agregar(&pila, 3);
    Agregar(&pila, 5);
    Agregar(&pila, 7);
    // Borramos el ultimo elemento (pop)
    Borrar(&pila);
    // Mostramos la nueva cima 
    cout << "Ultimo elemento: " << pila.elemento[pila.cima];
    return 0;
}

// Creamos la pila inicializando la cima en -1
void CrearPila(Pila *p)
{
    p->cima = -1;
}

// Comprar el index del ultimo elemento con la constante 
int Llena(Pila *p)
{
    // Le restamos uno porque el index es uno menos que el numero de elementos que contiene
    if (p->cima == tam_max -1)
    {
        // La pila esta llena
        return true;    
    }
    else
    {
        // La pila no esta llena
        return false;
    }
}

// Funcion Push
void Agregar(Pila *p, int elemento)
{
    // Si no esta llena 
    if (!Llena(p))
    {
        // La nueva cima va a ser una posicion mas 
        p->cima++;
        // Agregamos el elemento en la nueva posicion 
        p->elemento[p->cima] = elemento;
        // Imprimimos el valor que acabamos de ingresar 
        cout << "Ultimo elemento ingresado: " << p->elemento[p->cima] << endl;
    }
    else // Si esta llena 
    {
        cout << "No se pueden agregar mas elementos!!!!";
    }
}

// Compramos si la cima es -1
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

// Pop 
void Borrar(Pila *p)
{
    // Si no esta vacia
    if (!Vacia(p))
    {
        // La cima es uno menos 
        p->cima--;
        cout << "Elemento borrado!!!" << endl;
    }
    else // Si esta vacia
    {
        cout << "La pila esta vacia!!!!" << endl;
    }
    
}
