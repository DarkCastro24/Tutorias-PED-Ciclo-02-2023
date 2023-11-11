#include <iostream>
#include <string.h>

using namespace std;

class Persona {

private:
    string carnet;
    string nombre;
    string apellido;
    int edad;

public:
    // Constructor de la clase Persona
    Persona(string carnet,string nombre, string apellido,int edad) {
        this->carnet = carnet;
        this->nombre = nombre;
        this->apellido = apellido;
        this->edad = edad;
    }

    // Método para mostrar la información de la persona
    void mostrarInformacion() {
        cout << "Carnet: " << carnet << ", Nombre: " << nombre << ", Apellido: " << apellido << ", Edad: " << edad << " anios" << endl;
    }

    // Métodos get y set para el atributo carnet
    string getCarnet() {
        return carnet;
    }

    void setCarnet(string nuevoCarnet) {
        carnet = nuevoCarnet;
    }

    // Métodos get y set para el atributo nombre
    string getNombre() {
        return nombre;
    }

    void setNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    // Métodos get y set para el atributo apellido
    string getApellido() {
        return apellido;
    }

    void setApellido(string nuevoApellido) {
        apellido = nuevoApellido;
    }

    // Métodos get y set para el atributo edad
    int getEdad() {
        return edad;
    }

    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }
};

int main() {
    // Creando un objeto con el constructor
    Persona persona1("00117322", "Diego", "Castro", 20);
    persona1.mostrarInformacion();

    // Utilizando los métodos set
    persona1.setCarnet("00123265");
    persona1.setNombre("Jose");
    persona1.setApellido("Arias");
    persona1.setEdad(20);

    cout << "Despues de actualizar la informacion:" << endl;
    // Utilizando los metodos get
    cout << "Nuevo Carnet: " << persona1.getCarnet() << ", Nuevo Nombre: " << persona1.getNombre() << ", Nuevo Apellido: " << persona1.getApellido() << ", Nueva Edad: " << persona1.getEdad() << endl;

    return 0;
}
