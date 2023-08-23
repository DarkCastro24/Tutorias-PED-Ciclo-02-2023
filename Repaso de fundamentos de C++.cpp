// Libreria utilizada para operaciones de entrada/salida
#include <iostream>
// Libreria utilizada para cadenas de texto (String)
#include <string.h>

// Se utiliza para abreviar el acceso a las entidades de la libreria <iostream>
using namespace std;

/*
 *  Repaso de conceptos basicos de fundamentos de programacion con C++ (Prerequisito y fundamentales para Programacion de Estructuras Dinamicas)
 *  
 *  Tipos de datos fundamentales en C++ (variables y funciones)
 *  int: numeros enteros: 1 2 3 4
 *  double/float: numeros decimales: 50.55 9.50 7.55;
 *  String: cadenas de texto: Diego , Tutoría, Programación;
 *  bool: valores booleanos (true/false)
 *  char: un caracter: a , b , c
 *  void: (exclusivo de funciones) se asigna en funciones que no retornan nada
 * 
 *  Operadores aritmeticos 
 *  + : suma 
 *  - : resta
 *  * : multiplicacion
 *  / : division
 *  % : modulo (retorna el residuo de un numero dividio por x numero) Ejemplo: 10 % 2 = 0 , 10 % 3 = 1 
 *  ++ : incremento (suma 1 al valor de una variable)
 *  -- : decremento (resta 1 al valor de una variable)
 * 
 *  Operadores relacionales
 *  < : menor que
 *  > : mayor que 
 *  <= : menor o igual que 
 *  >= : mayor o igual que 
 *  == : igual
 *  != : diferente de
 * 
 *  Operadores lógicos
 *  && : AND (TODAS) las condiciones deben cumplirse para que el resultado sea TRUE 
 *  || : OR (O) una condicion debe cumplirse para que el resultado sea verdadero
 *  ! : NOT (no) es la negacion de una condicion (si es true pasa a ser false) 
 * 
 *  Estructuras selectivas (condicionales)
 *  
 *  if (condicion)  { 
 *      cout << "Para que se muestre el mensaje la condicion debe ser verdadera (true)";
 *  }  
 * 
 *  if (condicion) {
 *      cout << "Para que se muestre el mensaje la condicion debe ser verdadera (true)";
 *  } else {
 *      cout << "Para que se muestre el mensaje la condicion debe ser falsa (false)";
 *  }
 * 
 *  switch(valor) {
 *      case valor 1:
 *          cout << "Si el valor es igual a valor1 se ejecuta esto";
 *      break;
 *      case valor 2:
 *          cout << "Si el valor es igual a valor2 se ejecuta esto";
 *      break;
 *      case valor n:
 *          cout << "Si el valor es igual a valor n se ejecuta esto";
 *      break;
 *      default:
 *          cout << "En caso que ninguno de los casos anteriores coincida entra aqui";
 *      break; 
 * }
 * 
 *  Operadores lógicos
 *  && : AND (TODAS) las condiciones deben cumplirse para que el resultado sea TRUE 
 *  || : OR (O) una condicion debe cumplirse para que el resultado sea verdadero
 *  ! : NOT (no) es la negacion de una condicion (si es true pasa a ser false) 
 *   
 * 
 * 
 * 
*/

// Funcion principal (se ejecuta siempre primero)
int main()
{   
    // Declaracion de variables
    int anio;
    string comentario;
    // Asignando valores a las variables
    anio = 2023;
    comentario = "Hola mundo";
    // Imprimiendo mensaje
    cout << comentario << " en el anio " << anio;
    return 0;
}

