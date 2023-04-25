
#include <iostream>
#include <iomanip>
using namespace std;

struct Estudiante
{
    string nombre;
    int edad;
    string carrera;
    int semestre;
    float promedio;
};

int main()
{
    const int NUM_ESTUDIANTES = 3;
    Estudiante estudiantes[NUM_ESTUDIANTES];

    // Solicitamos los datos de los estudiantes
    for (int i = 0; i < NUM_ESTUDIANTES; i++)
    {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        getline(cin, estudiantes[i].nombre);

        cout << "Ingrese la edad del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].edad;

        cin.ignore();
        cout << "Ingrese la carrera del estudiante " << i + 1 << ": ";
        getline(cin, estudiantes[i].carrera);

        cout << "Ingrese el semestre del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].semestre;

        cout << "Ingrese el promedio del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].promedio;
        cin.ignore();
    }

    // Imprimimos los datos de los estudiantes
    cout << "\nDatos de los estudiantes:\n";
    cout << "--------------------------\n";
    for (int i = 0; i < NUM_ESTUDIANTES; i++)
    {
        cout << "Estudiante " << i + 1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << "\n";
        cout << "Edad: " << estudiantes[i].edad << "\n";
        cout << "Carrera: " << estudiantes[i].carrera << "\n";
        cout << "Semestre: " << estudiantes[i].semestre << "\n";
        cout << "Promedio: " << setprecision(2) << fixed << estudiantes[i].promedio << "\n";
        cout << "--------------------------\n";
    }

    return 0;
}
