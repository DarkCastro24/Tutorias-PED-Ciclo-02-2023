#include <iostream>

using namespace std;

// Declarando el puntero de la estructura principal
struct Nodo *pila = NULL;

// Declarando funciones 
void Insertar(int);
void EliminarUltimo(int &);
void Imprimir();
bool Vacia();
int UltimoElemento();

// Estructura que guardaremos dentro de la pila
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

// Metodo para agregar un elemento a la pila push()
void Insertar(int numero)
{
    // Creamos un nuevo nodo 
    struct Nodo *nuevoNodo = new Nodo();
    // Agregamos la informacion a la nueva estructura (Nodo)
    nuevoNodo->elemento = numero;
    // Asignamos que el siguiente elemento es el ultimo ingresado
    nuevoNodo->siguiente = pila;
    // Asignamos que el ultimo nodo ahora es la cima de la pila 
    pila = nuevoNodo;
}

// Validamos si la pila esta vacia 
bool Vacia()
{
    // Retornamos un valor en base al valor de la expresion booleana
    return pila == NULL;
}

// Imprimimos los elementos de la pila 
void Imprimir()
{
    // Creamos una estructura (nodo) para recorrer la pila
    struct Nodo *temporal = pila;
    // Mientras la pila no este vacia 
    while (temporal != NULL)
    {
        // Imprimimos los elementos de la pila
        cout << "Elementos de la pila " << temporal->elemento << endl;
        // Vamos bajando elemento por elemento 
        temporal = temporal->siguiente;
    }
    
}

// Metodo para obtener el ultimo elemento de la pila
int UltimoElemento() 
{
    // Si la pila esta vacia
    if (pila == NULL)
    {
        // Retornamos un -1 
        return -1;
    }
    else
    {
        // Si no retornamos el dato de la cima 
        return pila->elemento;
    }
    
}

// Operacion POP
void EliminarUltimo(int &n)
{
    // Si la pila no esta vacia 
    if (pila != NULL)
    {
        // Creamos un nodo temporal
        struct Nodo *temporal = pila;
        // Cambiamos el valor de n (por referencia)
        n = temporal->elemento;
        // El siguiente nodo es el actual
        pila = temporal->siguiente;
        // Eliminamos el nodo temporal (liberamos la memoria)
        delete temporal;
    }
    
}