#include <iostream>

using namespace std;
// Variable global
struct Nodo *pila = NULL;

// Declarando funciones
void Insertar(int);
void EliminarUltimo(int &);
void Imprimir();
bool Vacia();
int UltimoElemento();

// Un nodo tiene un dato, el cual es el elemento y  otro nodo al que apunta

struct Nodo
{
    int elemento;
    struct Nodo *siguiente;
};

int main()
{
    int valor; 
    cout<<"Ingrese un valor ";
    cin>>valor;  
    Insertar(valor);
    cout<<Vacia()<<endl;
    //cout<<UltimoElemento();
    Imprimir();
    EliminarUltimo(valor);
    cout<<Vacia()<<endl;
    return 0;
}

// Operacion Push
void Insertar(int n)
{
    // Reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    // asignar el valor
    nuevoNodo->elemento = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

// Operación Pop
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

// Imprimir la pila
void Imprimir(){
    //int contador; 
    struct Nodo *temporal = pila; 
    while (temporal != NULL)
    {
        cout<<"Elementos de la pila"<<temporal->elemento<<endl;
        temporal = temporal->siguiente; 
    }
    
    
}

// Operacion Pila vacia
bool Vacia()
{
    // Si devuelve 1 la pila esta vacia
    // Si devuelve 0 la pila no esta vacia
    return pila == NULL;
}

// Operación Top
int UltimoElemento()
{
    if (pila == NULL){
        return -1;
    }else {
        return pila->elemento;    
    }
}