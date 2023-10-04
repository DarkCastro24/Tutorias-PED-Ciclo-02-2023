#include <iostream>

using namespace std;

// Definición de la estructura de un nodo en el árbol
struct Arbol {
    int data;
    Arbol* izquierda;
    Arbol* derecha;
    Arbol(int val) : data(val), izquierda(nullptr), derecha(nullptr) {} // Inicializar estructura
};

// Predeclaracion de funciones
struct Arbol* insertar(Arbol*, int);
bool buscar(Arbol*, int);
void enOrden(Arbol*);

int main() {
    Arbol* root = nullptr;

    // Insertando elementos en el árbol
    root = insertar(root, 10);
    root = insertar(root, 5);
    root = insertar(root, 15);
    root = insertar(root, 3);
    root = insertar(root, 7);

    // Realizando una búsqueda en el árbol
    int value = 7;
    if (buscar(root, value)) {
        cout << value << " encontrado en el arbol." << endl;
    } else {
        cout << value << " no encontrado en el arbol." << endl;
    }
    
    // Imprimir el árbol en orden
    cout << "Recorrido en orden del arbol: ";
    enOrden(root);
    cout << endl;
    return 0;
}

// Función para insertar un elemento en el árbol
Arbol* insertar(Arbol* root, int val) {
    if (root == nullptr) {
        return new Arbol(val);
    }

    if (val < root->data) {
        root->izquierda = insertar(root->izquierda, val);
    } else if (val > root->data) {
        root->derecha = insertar(root->derecha, val);
    }

    return root;
}

// Función para buscar un elemento en el árbol
bool buscar(Arbol* root, int val) {
    if (root == nullptr) {
        return false;
    }

    if (val == root->data) {
        return true;
    } else if (val < root->data) {
        return buscar(root->izquierda, val);
    } else {
        return buscar(root->derecha, val);
    }
}

// Función para imprimir el árbol en orden (in-order)
void enOrden(Arbol* root) {
    if (root == nullptr) {
        return;
    }

    enOrden(root->izquierda);
    cout << root->data << " ";
    enOrden(root->derecha);
}
