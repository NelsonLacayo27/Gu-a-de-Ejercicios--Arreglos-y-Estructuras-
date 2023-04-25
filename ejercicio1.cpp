
#include <iostream>
#include <iomanip>
using namespace std;

struct Dispositivo {
    string nombre;
    string tipo;
    float precio;
    int stock;
};

int main() {
    Dispositivo dispositivo1 = {"iPhone 12", "Celular", 1199.99, 50};
    Dispositivo dispositivo2 = {"iPad Pro", "Tablet", 999.99, 30};
    Dispositivo dispositivo3 = {"Samsung Smart TV", "Smart TV", 1299.99, 20};
    Dispositivo dispositivo4 = {"Dell XPS 13", "Laptop", 1399.99, 40};

    cout << setprecision(2) << fixed;
    cout << "Dispositivos distribuidos por Conico:\n";
    cout << "------------------------------------\n";
    cout << "Nombre: " << setw(18) << left << dispositivo1.nombre;
    cout << "Tipo: " << setw(10) << left << dispositivo1.tipo;
    cout << "Precio: $" << setw(10) << left << dispositivo1.precio;
    cout << "Stock: " << dispositivo1.stock << "\n\n";

    cout << "Nombre: " << setw(18) << left << dispositivo2.nombre;
    cout << "Tipo: " << setw(10) << left << dispositivo2.tipo;
    cout << "Precio: $" << setw(10) << left << dispositivo2.precio;
    cout << "Stock: " << dispositivo2.stock << "\n\n";

    cout << "Nombre: " << setw(18) << left << dispositivo3.nombre;
    cout << "Tipo: " << setw(10) << left << dispositivo3.tipo;
    cout << "Precio: $" << setw(10) << left << dispositivo3.precio;
    cout << "Stock: " << dispositivo3.stock << "\n\n";

    cout << "Nombre: " << setw(18) << left << dispositivo4.nombre;
    cout << "Tipo: " << setw(10) << left << dispositivo4.tipo;
    cout << "Precio: $" << setw(10) << left << dispositivo4.precio;
    cout << "Stock: " << dispositivo4.stock << "\n\n";

    return 0;
}
