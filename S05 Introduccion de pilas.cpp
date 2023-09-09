#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    // Declarar una pila de enteros
    stack<int> miPila;

    // Insertar elementos en la pila
    miPila.push(10);
    miPila.push(20);
    miPila.push(30);

    // Obtener el tamaño de la pila
    cout << "Tamanio de la pila: " << miPila.size() << endl;

    // Acceder al elemento en la parte superior de la pila
    cout << "Elemento en la parte superior: " << miPila.top() << endl;

    // Eliminar el elemento en la parte superior de la pila
    miPila.pop();

    // Verificar si la pila está vacía
    if (miPila.empty()) {
        cout << "La pila está vacía." << endl;
    } else {
        cout << "La pila no esta vacia." << endl;
    }

    return 0;
}