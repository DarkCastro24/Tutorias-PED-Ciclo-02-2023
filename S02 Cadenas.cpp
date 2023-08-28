#include <iostream>
#include <string.h> // Libreria para utilizar cadenas (String)

using namespace std;

// Inicializamos la funcion para normalizar el nombre completo (inicial mayuscula resto minuscula)
string normalizar(string);

int main()
{
    /*  Elaborar un programa que solicite los datos de un estudiante de la UCA / Carnet, Nombres, Apellidos y Edad      
        Luego mostrar los datos concatenando el nombre y apellido, las iniciales siempre deben ser mayusculas el resto minusculas 

        // Declaración e inicializacion de cadenas 

        char nombre[] = {'D', 'i', 'e', 'g', 'o'};
        char apellido[] = "Castro";

        string nombre = "Diego";
        string apellido = "Castro";
        
        system("cls"); // Comando para limpiar la consola 
    */

    // Inicializamos las variables para almacenar los datos que se ingresaran
    int edad;
    string nombres, carnet,apellidos, nombreCompleto;

    // Solicitamos los datos del estudiante
    cout << "Ingrese los nombres del estudiante: ";
    getline(cin, nombres); // getline nos permite capturar el una cadena con espacios

    cout << "Ingrese el apellido del estudiante: ";
    getline(cin, apellidos);

    cout << "Ingrese el carnet del estudiante: ";
    getline(cin,carnet);  

    cout << "Ingrese la edad del estudiante: ";
    cin >> edad; // Para capturar numeros ocupamos cin

    // Concatenamos los nombres y apellidos para formar el nombre completo del estudiante
    nombreCompleto = nombres + " " + apellidos;

    // Mostrando los resultados ingresados por el usuario 
    cout << endl << "-----> Mostrando datos del estudiante <-----" << endl << endl; 
    cout << "El nombre completo es: " <<  nombreCompleto << endl;
    cout << "Su numero de carnet es: " << carnet <<  endl;
    cout << "La edad del estudiante es: " << edad << endl;
    cout << "Nombre completo normalizado: " << normalizar(nombreCompleto); // Mostramos el retorno de la funcion normalizar
}

// Funcion para normalizar el nombre completo (inicial mayuscula resto minuscula)
string normalizar(string nombreCompleto) 
{
    // Declaramos variable booleana para identificar cuando colocar una mayuscula
    bool sigMayus = true;
    // Recorremos el nombre completo como que fuera un char[]
    for (size_t i = 0; i < nombreCompleto.length(); i++)
    {
        // Verificamos si hay un espacio (en ese caso significa un cambio de palabra)
        if (nombreCompleto[i] == ' ')
        {
            // Si hay espacio la siguiente es mayuscula
            sigMayus = true;
        }
        else 
        {
            // Si la siguiente es mayuscula
            if (sigMayus)
            {
                // Convertimos el caracter actual en mayuscula
                nombreCompleto[i] = toupper(nombreCompleto[i]);
                // Asignamos valor false ya que las siguientes letras deben ser minusculas hasta que haya otro espacio
                sigMayus = false;
            }
            // Si no es mayuscula
            else
            {
                // Convertimos el caracter actual en minuscula
                nombreCompleto[i] = tolower(nombreCompleto[i]);
            }
        }
    }
    // Retornamos el nuevo valor del nombre
    return nombreCompleto;
}
