#include <iostream>

using namespace std;

class Car
{

public:
    string marca;
    string modelo;
    int anio;
    int estado;
    void Estado(int estado);
    float Distancia(float velocidad, float tiempo);
};

void Car::Estado(int estado)
{
    if (estado == 1)
    {
        cout << "Estoy encendido" << endl;
    }
    else
    {
        cout << "Estoy apagado" << endl;
    }
}
float Car::Distancia(float velocidad, float tiempo)
{
    int distancia;
    // d = v.t
    distancia = velocidad * tiempo;
    return distancia;
}

int main()
{
    // Creación del objeto carro1
    Car carro1;
    carro1.marca = "Nissan";
    carro1.modelo = "Sentra";
    carro1.anio = 2020;
    // Accediendo a las propiedad del objeto carro1
    cout << carro1.marca << endl;
    cout << carro1.anio << endl;
    // Accediendo a un método
    carro1.Estado(1);
    // 60 k/h  * 2h;
    cout << "La distancia recorrida km " << carro1.Distancia(60, 2);
    return 0;
}
