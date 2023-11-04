// Incluimos la librería estándar para entrada/salida y cadenas de texto
#include <iostream>
#include <string>

// Usamos el espacio de nombres estándar para simplificar la sintaxis
using namespace std;

// Definición de la clase Persona
class Persona {
    // Sección privada: Atributos que no pueden ser accedidos directamente desde fuera de la clase
    private:
        // Propiedad para guardar el nombre de la persona
        string nombre;
        // Propiedad para guardar la edad de la persona
        int edad;

    // Sección pública: Métodos que pueden ser accedidos desde fuera de la clase
    public:
        // Constructor: Inicializa los atributos con valores predeterminados
        Persona() {
            nombre = "";
            edad = 0;
        }

        // Método 'get' para el nombre: Retorna el nombre de la persona
        string getNombre() {
            return nombre;
        }

        // Método 'set' para el nombre: Establece el nombre de la persona
        void setNombre(string n) {
            nombre = n;
        }

        // Método 'get' para la edad: Retorna la edad de la persona
        int getEdad() {
            return edad;
        }

        // Método 'set' para la edad: Establece la edad de la persona
        void setEdad(int e) {
            if (e >= 0) { // Verificamos que la edad sea un valor válido
                edad = e;
            }
        }
};

// Función principal
int main() {
    // Creamos una instancia de la clase Persona
    Persona persona;

    // Establecemos el nombre y la edad utilizando los métodos 'set'
    persona.setNombre("Juan");
    persona.setEdad(25);

    // Mostramos el nombre y la edad utilizando los métodos 'get'
    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;

    // Terminamos la ejecución del programa
    return 0;
}
