
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char arreglo[] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};

    // Imprimir los valores almacenados en el arreglo con formato adecuado
    for (int i = 0; i < sizeof(arreglo) / sizeof(char); i++)
    {
        cout << setw(2) << arreglo[i] << " "; // Usamos setw(2) para imprimir cada valor con 2 caracteres de ancho
    }

    return 0;
}
