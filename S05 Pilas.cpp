#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct pizza {
	string nombre;
	int cantidad = 0;
	double precio = 0;
};

int main() {
	stack<pizza> pilaDePizzas;																			
	pizza unaPizza;
	int n;
	cout << "Ingrese la cantidad de pizzas a apliar" << endl;
	cin >> n;
    cin.ignore();
	cout << "Ingrese los datos de las " << n << " pizzas" << endl;
	string aux;
	for (int i = 0; i < n; i++)
	{
		cout << "Nombre de la pizza: "; 
		getline(cin, unaPizza.nombre);
		cout << "Cantidad de pizzas: "; 
		cin >> unaPizza.cantidad;
		getline(cin, aux);
		cout << "Precio de la pizza: "; 
		cin >> unaPizza.precio;
		getline(cin, aux);
		pilaDePizzas.push(unaPizza);
	}
	cout << "<--- Imprimiendo pizzas ingresadas --->" << endl;
	while (!pilaDePizzas.empty())
	{
		pizza pizzaEncima = pilaDePizzas.top();
		cout << "Nombre de la pizza: " << pizzaEncima.nombre << endl;
		cout << "Cantidad de pizzas: " << pizzaEncima.cantidad << endl;
		cout << "Precio de la pizza: " << pizzaEncima.precio << endl;
		pilaDePizzas.pop();
	}
	return 0;
}