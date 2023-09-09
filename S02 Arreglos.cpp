#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*
        Formas de inicializar arreglos:
        int numeros [] = {1,2,3,4,5};
        int numeros [] = {1,2,3};
        int numeros[2]; numeros[0] = 1; numeros[1] = 2;
        Tipos de arreglo: Todos los tipos de datos que posee C++ pueden ser declarados como arreglos (exceptuando void)

        Ejemplos:
        string colores[] = {"amarillo","rojo","verde"};
        double precios[] = {20.20, 10.03, 40.12};
        int numeros[] = {1, 2, 3, 4, 5};
        char[] = {'a','b','c'};

        Como imprimir todo el contenido de un arreglo
        for (int i = 0; i < tamaño_arreglo; i++)
        {
            arreglo[i];
        }
    */

    /*
        Crear un programa que solicite los nombres un numero n de estudiantes y luego los imprima en el orden ingresado
        !! Se debe preguntar al usuario cuantos estudiantes desea ingresar
    */

    // Declaracion de variables
    int numEstudiantes;
    // Puntero para crear el arreglo dinamico
    string *estudiantes;

    // Solicitamos el numero de estudiantes a ingresar
    cout << "Ingrese el numero de estudiantes desea agregar a la lista: ";
    cin >> numEstudiantes;

    // Declaramos un arreglo dinamico con el tamaño ingresado anteriormente
    estudiantes = new string[numEstudiantes];

    // Limpiando el bufer del teclado
    string aux;
    getline(cin, aux);
    cout << endl;

    // Repetimos la accion de pedir estudiante las veces que el usuario ingreso
    for (int i = 0; i < numEstudiantes; i++)
    {
        // Solicitamos que se ingrese un estudiante
        cout << "Ingrese el estudiante #" << i + 1 << ": ";
        // Guardamos al estudiante en la posicion actual de i
        getline(cin, estudiantes[i]);
    }

    // Separamos las secciones
    cout << endl << "-----> Imprimiendo los nombres de los estudiantes <-----" << endl;

    // Mostramos los resultados leyendo el arreglo
    for (int i = 0; i < numEstudiantes; i++)
    {
        cout << "Estudiante #" << i + 1 << ": " << estudiantes[i] << endl;
    }
    cout << endl << "Se mostraron todos los estudiantes de la lista!!!!" << endl;

    // Liberamos memoria
    delete[] estudiantes;

    return 0;
}