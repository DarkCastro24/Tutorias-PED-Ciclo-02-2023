#include <iostream>
#include <string.h>

using namespace std;

struct Nodo
{
    string name;
    struct Nodo *siguiente;
};

// Cada nodo tiene un enlace que apunta al siguiente nodo en la secuencia
// El último nodo apunta a nullptr o NULL
struct Nodo *lista = NULL;

// Declaración de funciones
void Insertar(string name);
void Imprimir();
void EliminarInicio();
void EliminarFinal();

int main()
{
    // Agregando elemenos a la lista 
    Insertar("Diego");
    Insertar("Juan");
    Insertar("Eduardo");
    Insertar("Alejandro");
    // Imprimiendo los datos de la lista 
    cout << endl << "--->   Imprimiendo todos los datos de la lista <---" << endl;
    Imprimir();
    // Eliminamos el frente y fin de la lista 
    EliminarInicio();
    EliminarFinal();
    // Mostramos nuevamente la lista con el nuevo frente y fin 
    cout << endl << "--->   Imprimiendo el inicio y final de la lista <---" << endl;
    Imprimir();
    return 0;
}

// Insertar nodos a la lista
void Insertar(string name)
{
    // Reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    // Variable auxiliar almacena el nodo actual
    struct Nodo *temporal = lista;
    if (nuevoNodo != NULL)
    {
        nuevoNodo->name = name;
        nuevoNodo->siguiente = NULL;
        // Si la lista esta vacia se agrega el primer nodo
        if (lista == NULL)
        {
            lista = nuevoNodo;
        }
        else
        {
            // Agregar un nodo al final
            while (temporal->siguiente != NULL)
            {
                temporal = temporal->siguiente;
            }
            temporal->siguiente = nuevoNodo;

            // Agregar un nodo al inicio
            /*    nuevoNodo->siguiente = lista;
               lista = nuevoNodo; */
        }
    }
    else
    {
        cout << "No se pueden agregar mas nodos";
    }
}

void EliminarInicio()
{
    struct Nodo *temporal = lista;
    // Si en la lista se encuentran elementos
    if (lista != NULL)
    {
        // Borra el elemento
        lista = lista->siguiente;
        // Libera la memoria
        delete temporal;
        // Mostros mensaje de exito
        cout << "Inicio de la lista eliminado!!!" << endl;
    }
    else
    {
        cout << "Lista vacia";
    }
}

void EliminarFinal()
{
    struct Nodo *temporal = lista;
    struct Nodo *temporal2;

    if (lista != NULL)
    {
        // Si el nodo no es el ultimo
        if (temporal->siguiente != NULL)
        {
            // Se realiza la iteraciones hasta encontra el ultimo nodo que apunte a NULL
            while (temporal->siguiente != NULL)
            {
                temporal2 = temporal;
                temporal = temporal->siguiente;
            }
            // Almacena el penultimo nodo sera quien apunte NULL
            temporal2->siguiente = NULL;
            // Se libera la memoria del nodo ultimo
            delete temporal;
            temporal = NULL;
        }
        else // Si unicamente se encontraba un nodo en la lista
        {
            delete lista;
            lista = NULL;
        }
        cout << "Final de la lista eliminado!!!" << endl;
    }
    else
    {
        cout << "Lista vacia";
    }
}

void Imprimir()
{
    struct Nodo *temporal = lista;
    if (lista != NULL)
    {
        while (temporal != NULL)
        {
            cout << "Nombre: " << temporal->name << " Direccion de memoria: " << temporal << " Direccion del siguiente nodo: " << temporal->siguiente << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "Lista vacia";
    }
}