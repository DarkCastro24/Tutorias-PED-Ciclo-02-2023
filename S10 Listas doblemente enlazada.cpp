#include <iostream>

using namespace std;

// Cada nodo cuenta con un enlace al nodo siguiente y anterior
// Permite la navegacion en ambas direcciones 
struct Nodo
{
    int dato;
    struct Nodo *siguiente;
    struct Nodo *anterior;
};

// Variable global,, donde se establece que la lista esta vacia
struct Nodo *lista = NULL;

// Declaración de funciones
void Insertar(int n);
void Imprimir();
void EliminarInicio();
void EliminarFinal();

int main()
{
    // Ingresamos elementos a la lista 
    Insertar(1);
    Insertar(2);
    Insertar(3);
    Insertar(4);
    Insertar(5);
    // Imprimimos todos los elementos de la lista
    Imprimir();
    cout << endl << "--->   Eliminando final e inicio de la lista   <---"<<endl;
    // Eliminamos el final de la lista 
    EliminarFinal();
    EliminarInicio();
    Imprimir();
    return 0;
}

// Insertar nodos a la lista
void Insertar(int n)
{
    struct Nodo *nuevoNodo = new Nodo();
    struct Nodo *temporal = lista;

    if (nuevoNodo != NULL)
    {
        nuevoNodo->dato = n;
        nuevoNodo->siguiente = NULL;
        nuevoNodo->anterior = NULL;
        // Si la lista esta vacia
        if (lista == NULL)
        {
            lista = nuevoNodo;
        }
        else
        {
            // Insertar al final
            /*             while (temporal->siguiente !=NULL)
                        {
                            temporal = temporal->siguiente;
                        }
                        temporal->siguiente = nuevoNodo;
                        nuevoNodo->anterior = temporal;  */

            // Insertar al inicio
            nuevoNodo->siguiente = lista;
            lista->anterior = nuevoNodo;
            lista = nuevoNodo;
        }
    }
    else
    {
        cout << "No se pueden agregar mas nodos";
    }
}

// Borrar el ultimo nodo de la lista
void EliminarFinal()
{
    struct Nodo *temporal = lista;
    struct Nodo *temporal2 = NULL;

    if (lista != NULL)
    {
        if (temporal->siguiente != NULL)
        {
            while (temporal->siguiente != NULL)
            {
                temporal = temporal->siguiente;
            }

            temporal2 = temporal->anterior;
            temporal2->siguiente = NULL;
            delete temporal;
        }
        else
        {
            delete lista;
            lista = NULL;
        }
    }
    else
    {
        cout << "Lista vacia";
    }
}

// Borrar el primer nodo de la lista
void EliminarInicio()
{
    struct Nodo *temporal  = lista; 

    if (lista != NULL)
    {
        if (temporal->siguiente != NULL)
        {
            lista = lista->siguiente;
            delete temporal;
            //temporal = NULL; 
            lista->anterior = NULL;
        }else{
            delete lista; 
            lista = NULL;
        }
        
    }else{
        cout<<"Lista vacia";
    }
    
}

void Imprimir()
{
    struct Nodo *temporal = lista;
    if (temporal != NULL)
    {
        // Imprimir cuando se inserta al final de la lista
        while (temporal != NULL)
        {
            cout << "Lista " << temporal->dato << " Direccion " << temporal << " Dir siguiente " << temporal->siguiente << " Dir anterior " << temporal->anterior << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "Lista vacia";
    }
}
