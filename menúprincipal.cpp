#include <iostream>
using namespace std;

// Declaración de funciones
void arreglos();
void estructuras();

// Función principal
int main() {
    int opcion;

    do {
        // Imprimir menú principal
        cout << "===== MENÚ PRINCIPAL =====" << endl;
        cout << "1. Arreglos" << endl;
        cout << "2. Estructuras" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                arreglos(); // Llama a la función para el submenú de arreglos
                break;
            case 2:
                estructuras(); // Llama a la función para el submenú de estructuras
                break;
            case 3:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}

// Función para el submenú de arreglos
void arreglos() {
    int opcion;

    do {
        // Imprimir submenú de arreglos
        cout << "===== SUBMENÚ DE ARREGLOS =====" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Volver al menú principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Usted eligió el Ejercicio 1 de Arreglos." << endl;
                break;
            case 2:
                cout << "Usted eligió el Ejercicio 2 de Arreglos." << endl;
                break;
            case 3:
                cout << "Volviendo al menú principal." << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);
}

// Función para el submenú de estructuras
void estructuras() {
    int opcion;

    do {
        // Imprimir submenú de estructuras
        cout << "===== SUBMENÚ DE ESTRUCTURAS =====" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Volver al menú principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Usted eligió el Ejercicio 1 de Estructuras." << endl;
                break;
            case 2:
                cout << "Usted eligió el Ejercicio 2 de Estructuras." << endl;
                break;
            case 3:
                cout << "Volviendo al menú principal." << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);
}

