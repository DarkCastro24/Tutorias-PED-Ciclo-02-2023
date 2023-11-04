// Incluimos la librería estándar para entrada/salida
#include<iostream> 

// Usamos el espacio de nombres estándar para simplificar la sintaxis
using namespace std; 

// Definición de la clase Coche
class Coche {
    // Sección privada: Aquí se declaran las propiedades que no pueden ser accedidas directamente desde fuera de la clase
    private: 
        // Propiedad para guardar la marca del coche
        string marca; 
        // Propiedad para guardar el modelo del coche
        string modelo; 
        // Propiedad para guardar el año del coche
        int anio; 

    // Sección pública: Aquí se declaran métodos y propiedades que pueden ser accedidos desde fuera de la clase
    public: 
        // Constructor: es un método especial que se llama cuando se crea una instancia de la clase
        Coche(string m, string mod, int a) {
            // Asignamos el valor pasado como argumento a la propiedad marca
            marca = m; 
            // Asignamos el valor pasado como argumento a la propiedad modelo
            modelo = mod; 
            // Asignamos el valor pasado como argumento a la propiedad anio
            anio = a; 
        }

        // Método para obtener la marca del coche
        string obtenerMarca() {
            return marca;
        }

        // Método para obtener el modelo del coche
        string obtenerModelo() {
            return modelo;
        }

        // Método para obtener el año del coche
        int obtenerAnio() {
            return anio;
        }

        // Método para mostrar la información del coche
        void mostrarInfo() {
            cout << "Marca: " << marca << ", Modelo: " << modelo << ", Anio: " << anio << endl;
        }
};

// Función principal
int main() {
    // Creamos una instancia de la clase Coche
    Coche miCoche("Toyota", "Corolla", 2023); 
    // Llamamos al método mostrarInfo() para mostrar la información del coche
    miCoche.mostrarInfo(); 

    // Usando métodos para obtener información
    cout << "Marca: " << miCoche.obtenerMarca() << endl;
    cout << "Modelo: " << miCoche.obtenerModelo() << endl;
    cout << "Anio: " << miCoche.obtenerAnio() << endl;

    // Terminamos la ejecución del programa
    return 0; 
}
