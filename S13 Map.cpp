#include <iostream>
#include <map>

using namespace std;

int main() {
    system("cls");
    
    // Creando un mapa que asocia cadenas de texto (string) con enteros (int)
    map<string, int> edad;

    // Insertando valores en el mapa
    edad["Alice"] = 28;
    edad["Bob"] = 22;
    edad["Charlie"] = 30;

    // Accediendo a los valores del mapa usando la clave
    cout << "Edad de Alice: " << edad["Alice"] << endl;

    // Recorriendo el mapa y mostrando todos los pares clave-valor
    for(const auto& datos : edad) {
        cout << datos.first << " tiene " << datos.second << " anios." << endl;
    }

    // Buscar si una clave existe en el mapa
    if(edad.find("Dave") == edad.end()) {
        cout << "Dave no se encuentra en el mapa." << endl;
    } else {
        cout << "Dave tiene " << edad["Dave"] << " anios." << endl;
    }

    return 0;
}
