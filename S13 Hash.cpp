#include <iostream>
#include <set>

using namespace std;

int main() {
    system("cls");

    // Creando un set de enteros
    set<int> numeros;

    // Insertando valores en el set
    numeros.insert(5);
    numeros.insert(3);
    numeros.insert(8);
    // No se insertará ya que 5 ya está en el set
    numeros.insert(5); 

    cout << "--->   Mostrando los numeros ingresados   <---" << endl;
    // Recorriendo el set y mostrando todos los valores
    for(int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Verificando si un valor está en el set
    if(numeros.find(3) != numeros.end()) {
        cout << "El numero 3 esta en el set." << endl;
    } else {
        cout << "El numero 3 no esta en el set." << endl;
    }

    // Eliminando un valor del set
    numeros.erase(3);

    // Mostrando nuevamente todos los valores
    for(int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
