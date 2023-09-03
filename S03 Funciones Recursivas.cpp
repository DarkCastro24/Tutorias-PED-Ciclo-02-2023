#include <iostream>

using namespace std;

// Inicializacion de funciones
void cuentaRegresiva(int);
int factorial(int);
void funcionA(int);
void funcionB(int);
int par(int);
int impar(int);

// Inicializacion de variables globales
int opcion, numero;
char continuar;

// Funcion main con menu 
int main()
{
    // Ocupamos un Do While para mostrar un menu y permitir seleccionar cualquier opcion
    do
    {   
        // Limpiamos la consola antes de imprimir el menu
        system("cls");
        // Imprimimos las opciones del menu
        cout << "------------> Menu de opciones <------------" << endl << endl;
        cout << "Seleccione una de las siguientes opciones" << endl;
        cout << "1. Cuenta regresiva (Recursividad directa)" << endl;
        cout << "2. Calcular factorial (Recursividad directa)" << endl;
        cout << "3. Cuenta regresiva (Recursividad indirecta)" << endl;
        cout << "4. Numero par o impar (Recursividad indirecta)" << endl;
        cout << "Ingrese una opcion: ";
        // Guardamos la opcion que ingrese el usuario
        cin >> opcion;

        // Limpiamos la consola
        system("cls");

        // Evaluamos los casos disponibles mediante switch
        switch (opcion)
        {
            case 1:
                cout << "Opcion seleccionada: cuenta regresiva (recursividad directa)" << endl;
                cout << "Ingrese el numero desde el cual desea hacer la cuenta regresiva: ";
                cin >> numero;
                cuentaRegresiva(numero);
                break;
            case 2:
                cout << "Opcion seleccionada: factorial de un numero" << endl;
                cout << "Ingrese el numero del que desea sacar factorial: ";
                cin >> numero;
                cout << "El factorial de " << numero << " es igual a : " << factorial(numero) << endl;
                break;
            case 3:
                cout << "Opcion seleccionada: cuenta regresiva (recursividad indirecta)" << endl;
                cout << "Ingrese el numero desde el cual desea hacer la cuenta regresiva: ";
                cin >> numero;
                funcionA(numero);
                break;
            case 4:
                cout << "Opcion seleccionada: Verificar si un numero es par o impar" << endl;
                cout << "Ingrese un numero: ";
                cin >> numero;
                if (par(numero))
                {
                    cout << "El numero es par";
                }
                else
                {
                    cout << "El numero es impar";
                }
                break;
            default:
                cout << "Opcion no disponible!!!!" << endl;
                break;
        }
        cout << endl << "Desea realizar otra accion (s/n)? ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');
}

// Recursividad directa: se refiere a una función que se llama a sí misma durante su ejecución.
void cuentaRegresiva(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        cuentaRegresiva(n - 1);
    }
    else if (n < 0)
    {
        cout << "El numero es menor que 0";
    }
}

// El factorial es igual al mismo numero multiplicado por si mismo (ejemplo factorial de 5 es 5*4*3*2*1)
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

/*  Recursividad indirecta: ocurre cuando una función A llama a una función B, y luego la función B, en algún momento,
    llama nuevamente a la función A */

// Funciones con recursividad indirecta para realizar una cuenta regresiva
void funcionB(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funcionA(n - 1);
    }
}

void funcionA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funcionB(n - 1);
    }
}

// Verificar si un numero es par mediante recursividad indirecta (inicia par)
int par(int n)
{
    if (n == 0)
    {
        return true;
    }
    else
    {
        return impar(n - 1);
    }
}

int impar(int n)
{
    if (n == 0)
    {
        return false;
    }
    else
    {
        return par(n - 1);
    }
}