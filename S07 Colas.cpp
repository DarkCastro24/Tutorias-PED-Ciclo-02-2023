#include <iostream>
// Libreria para usar colas
#include <queue>

using namespace std;

int main()
{

    // Crear una cola de enteros
    queue<int> cola;

    // Agregar elementos a la cola
    cola.push(10);
    cola.push(20);
    cola.push(30);
    cola.push(40);
    cola.push(50);

    // Acceder al elemento del frente de la cola
    int frente = cola.front();
    cout << "Elemento del frente de la cola: " << frente << endl;

    // Eliminar el elemento del frente de la cola
    cola.pop();

    // Acceder al nuevo elemento del frente de la cola
    frente = cola.front();
    cout << "Nuevo elemento del frente de la cola: " << frente << endl;

    // Comprobar si la cola está vacía
    if (cola.empty())
    {
        cout << "La cola esta vacia." << endl;
    }
    else
    {
        cout << "La cola no esta vacia." << endl;
    }

    // Obtener el tamaño de la cola
    cout << "Tamanio de la cola: " << cola.size() << endl;

    return 0;
}