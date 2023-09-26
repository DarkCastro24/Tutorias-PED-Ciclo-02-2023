#include <iostream>

using namespace std;

// El ultimo nodo apunta al primer nodo formando un circulo cerrado
struct Nodo
{
    int dato;
    struct Nodo *siguiente;
} nodo;

struct Nodo *lista = NULL;

// Declaracion de funciones
void InsertarInicio(int n);
void InsertarFinal(int n);
void EliminarInicio();
void EliminarFinal();
void Imprimir();

int main()
{
    // Agregando datos dentro de la lista
    InsertarInicio(45);
    InsertarInicio(60);
    InsertarFinal(20);
    InsertarInicio(15);

    // Imprimiendo los datos de la lista
    Imprimir();
    cout << "--->   Eliminando dos  <---" << endl;
    
    // Eliminamos el inicio y el final
    EliminarInicio();
    EliminarFinal();
    
    // Volvemos a imprimir
    Imprimir();

    return 0;
}

void InsertarInicio(int n)
{
    // Se reserva la memoria
    struct Nodo *nuevoNodo = new Nodo();
    // Puntero que representara el ultimo elemento de la lista
    struct Nodo *temporal;
    // se asigna el valor que el usuario ingresa a dato
    nuevoNodo->dato = n;
    // Si lista esta vacia
    if (lista == NULL)
    {
        lista = nuevoNodo;
        // Por ser el unico nodo en la lista se apunta a si mismo
        lista->siguiente = lista;
        // Se estable la circularidad entre el ultimo nodo y el primero, pero como es un unico nodo en la lista
        // Entonces el final de la lista es igual al primer nodo de la lista
        temporal = lista;
    }
    else // Si no ...  estaba vacia la lista, si existian nodos en la lista
    {
        // El nuevo nodo que se agrega se convierte en el primer nodo
        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;
        // Se establece la circularidad
        temporal->siguiente = lista;
    }
}

void InsertarFinal(int n)
{
    // Se reserva la memoria
    struct Nodo *nuevoNodo = new Nodo();
    // Puntero que representara el ultimo elemento de la lista
    struct Nodo *temporal;
    // se asigna el valor que el usuario ingresa a dato
    nuevoNodo->dato = n;
    // Si lista esta vacia
    if (lista == NULL)
    {
        lista = nuevoNodo;
        lista->siguiente = lista;
        temporal = nuevoNodo;
    }
    else
    {
        // El nodo que se agrega se convierte en el ultimo nodo
        temporal->siguiente = nuevoNodo;
        // Se establece la circularidad
        nuevoNodo->siguiente = lista;
        temporal = nuevoNodo;
    }
}

void EliminarInicio()
{
    struct Nodo *temporal = lista;

    if (lista == NULL)
    {
        cout << "Lista vacia";

    } // SI SOLO HAY UN ELEMENTO
    else if (lista->siguiente == lista)
    {
        delete lista;
        lista = NULL;
    }
    else
    {
        while (temporal->siguiente != lista)
        {
            temporal = temporal->siguiente;
        }
        // Borra el elemento pero no libera la memoria
        temporal->siguiente = lista->siguiente;
        // Liberar la memoria
        delete lista;
        // Se enlaza al siguiente nodo
        lista = temporal->siguiente;
    }
}
void EliminarFinal()
{
    struct Nodo *temporal = lista;
    struct Nodo *temporal2 = NULL;

    if (lista == NULL)
    {
        cout << "Lista vacia";

    } // SI SOLO HAY UN ELEMENTO
    else if (lista->siguiente == lista)
    {
        delete lista;
        lista = NULL;
    }
    else
    {
        // Si hay mas de un elemento en la lista
        while (temporal->siguiente != lista)
        {
            temporal2 = temporal;
            temporal = temporal->siguiente;
        }
        // El nodo del penultimo nodo se almacena en temporal2 y se enlaza al nodo siguiente
        temporal2->siguiente = temporal->siguiente;
        delete temporal;
    }
}

void Imprimir()
{
    struct Nodo *temporal = lista;
    if (lista != NULL)
    {
        do
        {
            cout << "Lista " << temporal->dato << " Direccion " << temporal << " Dir siguiente " << temporal->siguiente << endl;
            temporal = temporal->siguiente;
        } while (temporal != lista);
    }
    else
    {
        cout << "Lista vacia";
    }
}
