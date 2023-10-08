#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    struct Nodo *izquierdo;
    struct Nodo *derecho;
    struct Nodo *padre;
};

struct Nodo *Crear(int n, struct Nodo *padre);

// Se pasa un puntero y por referencia ya que se modificara el valor
void Insertar(struct Nodo *&arbol, int n, struct Nodo *padre);
void Inorden(struct Nodo *arbol);
void Preorden(struct Nodo *arbol);
void Postorden(struct Nodo *arbol);
bool Buscar(struct Nodo *arbol, int n);
void BuscarNodoEliminar(struct Nodo *arbol, int n);
void NodoEliminar(struct Nodo *nodo);
struct Nodo *NodoMenor(struct Nodo *arbol);
void SustituirNodo(struct Nodo *arbol, struct Nodo *nuevoNodo);
void Destruir(struct Nodo *nodo);

struct Nodo *arbol = NULL;

int main()
{
    int dato = 0;

    Crear(dato, arbol);
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa un valor: ";
        cin >> dato;
        Insertar(arbol, dato, NULL);
    }

    cout << endl << "Recorrido Inorden ";
    Inorden(arbol);
    cout << endl;
    cout << "Recorrido Preorden ";
    Preorden(arbol);
    cout << endl;
    cout << "Recorrido Postorden ";
    Postorden(arbol);
    cout << endl;
    cout<< "--------------"<<endl;
    BuscarNodoEliminar(arbol, 10);
    cout << "Recorrido Inorden ";
    Inorden(arbol);

    return 0;
}

// Crear Nodo
struct Nodo *Crear(int n, struct Nodo *padre)
{
    // Reservar la memoria
    struct Nodo *nuevoNodo = new Nodo();
    // Asignar el valor que el usuario ingresa
    nuevoNodo->dato = n;
    nuevoNodo->izquierdo = NULL;
    nuevoNodo->derecho = NULL;
    nuevoNodo->padre = padre;
    return nuevoNodo;
}

// Insertar
void Insertar(struct Nodo *&arbol, int n, struct Nodo *padre)
{
    // Si arbol esta vacio
    if (arbol == NULL)
    {
        struct Nodo *nuevoNodo = Crear(n, padre);
        arbol = nuevoNodo;
    }
    else // El arbol ya tiene nodos
    {
        int raiz = arbol->dato;
        // Si valor ingresado es menor a la raiz
        if (n < raiz)
        {
            // Funcion recursiva directa
            Insertar(arbol->izquierdo, n, arbol);
        }
        else
        {
            // Si valor ingresado es mayor a la raiz
            Insertar(arbol->derecho, n, arbol);
        }
    }
}

// Recorrer
// Inorden: Hijo izquierdo — raíz — hijo derecho.
void Inorden(struct Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        Inorden(arbol->izquierdo);
        // Raiz
        cout << arbol->dato << "-";
        Inorden(arbol->derecho);
    }
}

// Preorden: Raíz — hijo izquierdo — hijo derecho.
void Preorden(struct Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        // Raiz
        cout << arbol->dato << "-";
        Preorden(arbol->izquierdo);
        Preorden(arbol->derecho);
    }
}

// PostOrden:Hijo izquierdo– hijo derecho — raíz
void Postorden(struct Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        Postorden(arbol->izquierdo);
        Postorden(arbol->derecho);
        // Raiz
        cout << arbol->dato << "-";
    }
}

bool Buscar(struct Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->dato == n)
    {
        return true;
    }
    else if (n < arbol->dato)
    {
        return Buscar(arbol->izquierdo, n);
    }
    else
    {
        return Buscar(arbol->derecho, n);
    }
}

void BuscarNodoEliminar(struct Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return;
    }
    else if (n < arbol->dato)
    {
        BuscarNodoEliminar(arbol->izquierdo, n);
    }
    else if (n > arbol->dato)
    {
        BuscarNodoEliminar(arbol->derecho, n);
    }
    else
    {
        NodoEliminar(arbol);
    }
}

void NodoEliminar(struct Nodo *nodo)
{
    if (nodo->izquierdo && nodo->derecho)
    {
        struct Nodo *nodoMenor = NodoMenor(nodo->derecho);
        nodo->dato = nodoMenor->dato;
        NodoEliminar(nodoMenor);
    } // si solo tiene un hijo
    else if (nodo->izquierdo)
    {
        SustituirNodo(nodo, nodo->izquierdo);
        Destruir(nodo);
    }
    else if (nodo->derecho)
    {
        SustituirNodo(nodo, nodo->derecho);
        Destruir(nodo);
    }
    else
    { // si es el nodo a eliminar es hoja
        SustituirNodo(nodo, NULL);
        Destruir(nodo);
    }
}

struct Nodo *NodoMenor(struct Nodo *arbol)
{
    if (arbol == NULL)
    {
        return NULL;
    }
    if (arbol->izquierdo)
    {
        return NodoMenor(arbol->izquierdo);
    }
    else
    {
        return arbol;
    }
}
void SustituirNodo(struct Nodo *arbol, struct Nodo *nuevoNodo)
{
    if (arbol->padre)
    {
        if (arbol->dato == arbol->padre->izquierdo->dato)
        {
            arbol->padre->izquierdo = nuevoNodo;
        }
        else if (arbol->dato == arbol->padre->dato)
        {
            arbol->padre->derecho = nuevoNodo;
        }
    }
    if (nuevoNodo)
    {
        nuevoNodo->padre = arbol->padre;
    }
}

void Destruir(struct Nodo *nodo)
{
    nodo->izquierdo = NULL;
    nodo->derecho = NULL;
    delete nodo;
}