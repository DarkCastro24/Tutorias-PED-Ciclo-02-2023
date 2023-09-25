#include <iostream>
#include <list>

using namespace std;

/* 
    Las listas permiten agregar, eliminar y acceder a elementos en cualquier posición. 
    La forma en que se implementa una lista (simple, doble, circular, etc.) afecta cómo se realizan estas operaciones.
*/

int main() {
    // Declaramos una lista de enteros
    list<int> myList;

    // Agregamos elementos a la lista
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);
    myList.push_back(4);
    myList.push_back(5);

    // Mostramos todos los elementos de la lista
    cout << "Elementos de la lista:" << endl;
    for (const int& num : myList) {
        cout << num << " ";
    }
    cout << endl;

    // Eliminamos un elemento de la lista (por ejemplo, el segundo elemento y partimos del inicio de la lista)
    list<int>::iterator it = myList.begin();
    advance(it, 2); // Avanzar al segundo elemento
    myList.erase(it);

    // Mostrar la lista actualizada
    cout << "Elementos de la lista despues de eliminar el segundo elemento:" << endl;
    for (const int& num : myList) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
