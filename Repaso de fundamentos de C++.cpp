// Libreria utilizada para operaciones de entrada/salida
#include <iostream>

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
 *  IF
 *  if (condicion)  {
 *      cout << "Para que se muestre el mensaje la condicion debe ser verdadera (true)";
 *  }
 *
 *  IF / ELSE
 *  if (condicion) {
 *      cout << "Para que se muestre el mensaje la condicion debe ser verdadera (true)";
 *  } else {
 *      cout << "Para que se muestre el mensaje la condicion debe ser falsa (false)";
 *  }
 *
 *  ELSE IF
 *  if (condicion 1) {
 *      cout << "Si se cumple la condicion 1 mostramos este mensaje";
 *  } else if (condicion 2){
 *      cout << "Si se cumple la condicion 2 mostramos este mensaje";
 *  } else {
 *      cout << "Si ninguna de las dos anteriores se cumplio mostramos este mensaje";
 *  }
 *
 *  SWITCH
 *  switch(valor) {
 *      case valor1:
 *          cout << "Si el valor es igual a valor1 se ejecuta esto";
 *      break;
 *      case valor2:
 *          cout << "Si el valor es igual a valor2 se ejecuta esto";
 *      break;
 *      case valor-n:
 *          cout << "Si el valor es igual a valor-n se ejecuta esto";
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
 *  Estructuras repetitivas (Bucles)
 *  
 *  FOR: Se ejecuta el codigo el numero de veces que nosotros indicamos --Tip se ocupa para recorrer arreglos
 *  for (int i = 0; i < 5; i++)
 *  {
 *      El codigo se ejecuta 5 veces
 *  }
 *
 *  WHILE: Se ejecuta el codigo mientras la condicion sea verdadera
 *  while (condicion)
 *  {
 *      Ejecutamos mientras sea verdadera la condicion
 *  }
 *
 *  DO WHILE: Primero ejecuta el codigo y luego evalua -- Tip se ocupa para la creacion de menus en consola
 *  do
 *  {
 *      Si la condicion es correcta se vuelve a ejecutar si no se sale del bucle.
 *  } while (condicion);
 *
 * 
 *  Arreglos:  
 *  Estructura basica del arreglo: tipo_de_dato nombre_del_vector[tamaño]; 
 *  Ejemplo: int numeros [4]; -- Arreglo que puede contener hasta 4 datos de tipo INT
 *  
 *  Asignacion de valores:
 *  numeros[0] = 30;
 *  numeros[1] = 15;
 *  numeros[2] = 41;
 *  numeros[3] = 23;
 * 
 *  Forma alternativa: Declarar un arreglo con valores
 *  int numeros[] = {30,15,41,23};
 * 
 *  Recorrer un arreglo: Utilizando la sentencia FOR
 *  
 *  int numeros[3] = {3,2,1};
 *
 *  for (int i = 0; i < 3; i++)
 *  {
 *      cout << "Imprimiendo numero: " << numeros[i] << endl;
 *  }  
 * 
 */

// Funcion principal (se ejecuta siempre primero)
int main()
{
    cout << "Repaso de fundamentos de programacion en lenguaje C++" << endl;
    cout << "Las anotaciones se encuentran en el codigo" << endl;
    return 0;
}
