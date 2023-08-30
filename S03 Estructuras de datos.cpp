#include <iostream>
#include <string.h>

using namespace std;

// Declaración de estructura
struct Direccion
{
    string direccion;
    int casa;
} dir;

// Declaracion de estructura con estructura anidada 
struct Alumno
{
    string nombre;
    string apellido;
    string codigo;
    int edad;
    struct Direccion dir;
} alumno[10];

// Inicializacion de funciones
void imprimirDatos();

// Declaracion de variables globales
int numAlumnos = 0;

int main()
{
    system("cls");
    
    // Variable para limpiar el buffer del teclado
    string aux;

    // Solicitamos el numero de alumnos
    cout << "Ingrese el numero de alumnos que desea registrar (Maximo 10 alumnos): ";
    cin >> numAlumnos;

    // Limpiando el bufer del teclado
    getline(cin, aux);

    // Validamos que el numero de estudiantes a ingresar sea como maximo del tamaño del arreglo
    if (numAlumnos <= 10)
    {
        for (int i = 0; i < numAlumnos; i++)
        {
            cout << endl << "----->   Solicitando datos el estudiante # " << i + 1 << "  <-----" << endl;

            // Solicitamos los datos de los estudiantes 
            cout << "Ingrese el nombre del estudiante: ";
            getline(cin, alumno[i].nombre);

            cout << "Ingrese el apellido del estudiante: ";
            getline(cin, alumno[i].apellido);

            cout << "Ingrese el codigo del estudiante: ";
            getline(cin, alumno[i].codigo);

            cout << "Ingrese la edad del estudiante: ";
            cin >> alumno[i].edad;

            // Limpiamos el buffer del teclado luego de pedir un int 
            getline(cin, aux);

            cout << "Ingrese la direccion donde reside el estudiante: ";
            getline(cin, alumno[i].dir.direccion);

            cout << "Ingrese el numero de casa del estudiante: ";
            cin >> alumno[i].dir.casa;
            
            // Limpiamos el buffer del teclado luego de pedir un int 
            getline(cin, aux);
        }
        // Imprimimos los datos ya que la estructura es una variable global
        imprimirDatos();
    }
    else
    {
        cout << "No puedes exceder el maximo de 10 estudiantes!!!!";
    }
    return 0;
}

// Funcion para imprimir los datos de la estructura
void imprimirDatos()
{
    cout << endl << "------> Imprimiendo la informacion ingresada <------" << endl;
    // Recorremos la estructura como un arreglo y vamos mostrando cada variable
    for (int i = 0; i < numAlumnos; i++)
    {
        cout << endl << "-----   Datos del estudiante #" << i + 1 << "   -----" << endl << endl;
        cout << "Nombre: " << alumno[i].nombre << endl;
        cout << "Apellido: " << alumno[i].apellido << endl;
        cout << "Carnet: " << alumno[i].codigo << endl;
        cout << "Edad: " << alumno[i].edad << endl;
        cout << "Direccion: " << alumno[i].dir.direccion << " Casa #" << alumno[i].dir.casa;
    }
}