#include <iostream>

using namespace std; 

// Creando estructura de datos 
struct Nodo {
    int dato;
    Nodo* siguiente;
    Nodo(int valor) : dato(valor), siguiente(nullptr) {} // Codigo para inicializar un Nodo
};

// Predeclaracion de funciones 
void agregar(Nodo*&, int);
void eliminar(Nodo*&, int);
void mostrar(Nodo*);
bool buscar(Nodo*,int);
bool modificar(Nodo*,int,int);

int main() {
    Nodo* cabeza = nullptr;
    
    agregar(cabeza, 1);
    agregar(cabeza, 2);
    agregar(cabeza, 3);
    agregar(cabeza, 4);

    cout << "Lista original: ";
    mostrar(cabeza);

    eliminar(cabeza, 2);
    cout << "Lista despues de eliminar 2: ";
    mostrar(cabeza);

    modificar(cabeza, 3, 5);
    cout << "Lista despues de modificar 3 a 5: ";
    mostrar(cabeza);

    bool encontrado = buscar(cabeza, 4);
    if (encontrado) {
        cout << "El valor 4 esta en la lista." << endl;
    } else {
        cout << "El valor 4 no esta en la lista." << endl;
    }

    return 0;
}

// Función para agregar un valor al final de la lista
void agregar(Nodo*& cabeza, int valor) {
    Nodo* nuevoNodo = new Nodo(valor);
    if (!cabeza) {
        cabeza = nuevoNodo;
    } else {
        Nodo* actual = cabeza;
        while (actual->siguiente) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
    }
}

// Función para eliminar un valor de la lista
void eliminar(Nodo*& cabeza, int valor) {
    if (!cabeza) {
        return; // La lista está vacía
    }
    if (cabeza->dato == valor) {
        Nodo* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
        return;
    }
    Nodo* actual = cabeza;
    while (actual->siguiente && actual->siguiente->dato != valor) {
        actual = actual->siguiente;
    }
    if (actual->siguiente) {
        Nodo* temp = actual->siguiente;
        actual->siguiente = actual->siguiente->siguiente;
        delete temp;
    }
}

// Función para mostrar la lista
void mostrar(Nodo* cabeza) {
    Nodo* actual = cabeza;
    while (actual) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}

// Función para buscar un valor en la lista
bool buscar(Nodo* cabeza, int valor) {
    Nodo* actual = cabeza;
    while (actual) {
        if (actual->dato == valor) {
            return true;
        }
        actual = actual->siguiente;
    }
    return false;
}

// Función para modificar un valor en la lista
bool modificar(Nodo* cabeza, int valorAntiguo, int valorNuevo) {
    Nodo* actual = cabeza;
    while (actual) {
        if (actual->dato == valorAntiguo) {
            actual->dato = valorNuevo;
            return true;
        }
        actual = actual->siguiente;
    }
    return false;
}
