// Libreria que importa la entrada y salida de datos (cout && cin)
#include <iostream>

// Simplifica la escritura de las funciones de la libreria principal de C++ <iostream>
using namespace std;

// Variables globales (se pueden acceder desde cualquier funcion)
int base, altura;

// Inicializamos los metodos
void mostrarResultados(int, int);
int obtenerPerimetro();
int obtenerArea();
bool validar(int);

// Funcion principal es lo primero que se ejecuta al correr el programa
int main()
{
    // Comando para limpiar la consola para apreciar mejor los resultados
    system("cls");
    cout << "---> Ingrese los valores solicitados <--- \n" << endl;
    // Solicitamos los datos al usuario
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    // Validamos que la altura sea igual o mayor a 0
    if (validar(altura))
    {
        cout << "Ingrese la base del triangulo: ";
        cin >> base;
        // Validamos que la base sea igual o mayor a 0
        if (validar(base))
        {
            // Obtenemos los valores del retorno de las funciones
            int perimetro = obtenerPerimetro();
            int area = obtenerArea();
            // Imprimimos saltos de linea con un separador para mostrar abajo los resultados
            cout << endl << "--------------------------------" << endl << endl;
            // Mostramos los resultados obtenidos enviando los valores como parametros
            mostrarResultados(perimetro, area);
        }
        else
        {
            cout << "El valor de la base no puede ser igual o menor a 0!!!";
        }
    }
    else
    {
        cout << "El valor de la altura no puede ser igual o menor a 0!!!";
    }
}

// Método obtener el perimetro del triangulo (Formula L+L+L)
int obtenerPerimetro()
{
    return (base * 3);
}

// Método obtener el area del triangulo (Formula B*A)
int obtenerArea()
{
    return (base * altura) / 2;
}

// Método para validar que los datos ingresados no sean negativos
bool validar(int valor)
{
    if (valor > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Método para mostrar los resultados (Tipo void no retorna nada)
void mostrarResultados(int perimetro, int area)
{
    cout << "Los numeros ingresados fueron: " << endl;
    cout << "El perimetro del triangulo es: " << perimetro << endl;
    cout << "El area del triangulo es: " << area << endl;
}
