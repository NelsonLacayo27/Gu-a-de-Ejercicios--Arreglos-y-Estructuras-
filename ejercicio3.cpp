
#include <iostream>
using namespace std;

struct Atleta
{
    string nombre;
    int edad;
    string deporte;
    struct Medalla
    {
        string tipo;
        string evento;
        int anio;
    } medalla;
} atletas[5];

int main()
{
    // Solicitar los datos al usuario
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese los datos del atleta " << i + 1 << ":\n";
        cout << "Nombre: ";
        getline(cin, atletas[i].nombre);
        cout << "Edad: ";
        cin >> atletas[i].edad;
        cin.ignore(); // Limpiar el buffer de entrada
        cout << "Deporte: ";
        getline(cin, atletas[i].deporte);
        cout << "Medalla ganada:\n";
        cout << "- Tipo: ";
        getline(cin, atletas[i].medalla.tipo);
        cout << "- Evento: ";
        getline(cin, atletas[i].medalla.evento);
        cout << "- Año: ";
        cin >> atletas[i].medalla.anio;
        cin.ignore(); // Limpiar el buffer de entrada
        cout << endl;
    }

    // Imprimir los datos almacenados en las estructuras anidadas
    for (int i = 0; i < 5; i++)
    {
        cout << "Datos del atleta " << i + 1 << ":\n";
        cout << "Nombre: " << atletas[i].nombre << endl;
        cout << "Edad: " << atletas[i].edad << endl;
        cout << "Deporte: " << atletas[i].deporte << endl;
        cout << "Medalla ganada:\n";
        cout << "- Tipo: " << atletas[i].medalla.tipo << endl;
        cout << "- Evento: " << atletas[i].medalla.evento << endl;
        cout << "- Año: " << atletas[i].medalla.anio << endl;
        cout << endl;
    }

    return 0;
}
