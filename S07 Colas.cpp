#include <iostream>
// Libreria para usar colas
#include <queue>

using namespace std;

int main()
{

    // Crear una cola de enteros
    queue<int> cola;

    int tamanio;
    cout << "Ingrese el numero de elementos a ingresar en la cola: ";
    cin >> tamanio;
    
    for (int i = 0; i < tamanio; i++)
    {
        cola.push(i+1);
    }
    cout << endl;
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