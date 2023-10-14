#include <iostream>

using namespace std;

// Definición de la estructura de un árbol binario.
struct Arbol {
    // Valor almacenado en el nodo.
    int dato;          
    Arbol* izquierda;  
    Arbol* derecha;   
    Arbol(int valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}  // Constructor del nodo.
};

// Predeclaracion de funciones
Arbol* insertar(Arbol* raiz, int valor);
Arbol* buscar(Arbol* raiz, int valor);
void inOrden(Arbol* raiz);
Arbol* nodoConMinimoValor(Arbol* nodo);
Arbol* eliminar(Arbol* raiz, int valor);

int main() {
    system("cls");
    
    Arbol* raiz = nullptr;
    raiz = insertar(raiz, 50);
    insertar(raiz, 30);
    insertar(raiz, 20);
    insertar(raiz, 40);
    insertar(raiz, 70);
    insertar(raiz, 60);
    insertar(raiz, 80);

    cout << "Recorrido In-Orden: ";
    inOrden(raiz);
    cout << endl;

    cout << "Buscar el valor 25: " << (buscar(raiz, 25) ? "Encontrado" : "No encontrado") << endl;
    cout << "Buscar el valor 70: " << (buscar(raiz, 70) ? "Encontrado" : "No encontrado") << endl;

    cout << "Eliminar el valor 20" << endl;
    raiz = eliminar(raiz, 20);
    cout << "Recorrido In-Orden: ";
    inOrden(raiz);
    cout << endl;

    cout << "Eliminar el valor 30" << endl;
    raiz = eliminar(raiz, 30);
    cout << "Recorrido In-Orden: ";
    inOrden(raiz);
    cout << endl;

    cout << "Eliminar el valor 50" << endl;
    raiz = eliminar(raiz, 50);
    cout << "Recorrido In-Orden: ";
    inOrden(raiz);
    cout << endl;

    return 0;
}

// Función para insertar un valor en el árbol.
Arbol* insertar(Arbol* raiz, int valor) {
    // Si la raíz es nula, se crea un nuevo nodo y se retorna.
    if (!raiz) {  
        return new Arbol(valor);
    }

    // Si el valor es menor que el dato en la raíz, insertamos en el subárbol izquierdo.
    if (valor < raiz->dato) {
        raiz->izquierda = insertar(raiz->izquierda, valor);
    }
    // Si el valor es mayor, insertamos en el subárbol derecho.
    else if (valor > raiz->dato) {
        raiz->derecha = insertar(raiz->derecha, valor);
    }

    return raiz;  // Retornamos la raíz (sin cambios o con el nuevo nodo añadido).
}

// Función para buscar un valor en el árbol.
Arbol* buscar(Arbol* raiz, int valor) {
    // Si el árbol está vacío o el valor es encontrado, retornamos el nodo actual.
    if (!raiz || raiz->dato == valor) {
        return raiz;
    }

    // Si el valor es menor que el dato en la raíz, buscamos en el subárbol izquierdo.
    if (valor < raiz->dato) {
        return buscar(raiz->izquierda, valor);
    }
    // Si es mayor, buscamos en el subárbol derecho.
    else {
        return buscar(raiz->derecha, valor);
    }
}

// Función que realiza un recorrido in-orden del árbol.
void inOrden(Arbol* raiz) {
    // Si el nodo es nulo, simplemente retornamos.
    if (!raiz) return;  
    // Primero recorremos el subárbol izquierdo.
    inOrden(raiz->izquierda);  
    // Procesamos el nodo actual.
    cout << raiz->dato << " ";
    // Luego recorremos el subárbol derecho.  
    inOrden(raiz->derecha);   
}

// Función para obtener el nodo con el valor mínimo en un árbol.
Arbol* nodoConMinimoValor(Arbol* nodo) {
    Arbol* actual = nodo;
    // Navegamos por el subárbol izquierdo hasta llegar al nodo más a la izquierda.
    while (actual && actual->izquierda != nullptr) {
        actual = actual->izquierda;
    }
    return actual;
}

// Función para eliminar un nodo con cierto valor del árbol.
Arbol* eliminar(Arbol* raiz, int valor) {
    if (!raiz) return raiz;  // Si el árbol está vacío, simplemente retornamos.

    // Si el valor es menor que el dato en la raíz, eliminamos en el subárbol izquierdo.
    if (valor < raiz->dato) {
        raiz->izquierda = eliminar(raiz->izquierda, valor);
    }
    // Si es mayor, eliminamos en el subárbol derecho.
    else if (valor > raiz->dato) {
        raiz->derecha = eliminar(raiz->derecha, valor);
    }
    // Si el valor es igual al dato en la raíz, entonces este es el nodo a eliminar.
    else {
        // Nodo con solo un hijo o sin hijos.
        if (!raiz->izquierda) {
            Arbol* temp = raiz->derecha;
            // Eliminamos el nodo actual.
            delete raiz;  
            // Retornamos el hijo (si lo tiene).
            return temp;  
        }
        else if (!raiz->derecha) {
            Arbol* temp = raiz->izquierda;
            delete raiz;
            return temp;
        }

        // Nodo con dos hijos, obtenemos el sucesor inorden (nodo con el valor mínimo en el subárbol derecho).
        Arbol* temp = nodoConMinimoValor(raiz->derecha);
        // Copiamos el dato del sucesor al nodo actual.
        raiz->dato = temp->dato;  
        // Eliminamos el sucesor inorden.
        raiz->derecha = eliminar(raiz->derecha, temp->dato);
    }
    return raiz;
}
