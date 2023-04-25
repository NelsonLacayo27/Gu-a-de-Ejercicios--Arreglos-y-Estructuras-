
#include <iostream>
#include <string>

int main() {
    std::string arreglo[5];
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Ingrese el valor para la posición " << i << ": ";
        std::cin >> arreglo[i];
    }
    
    for (int i = 0; i < 5; i++) {
        std::cout << arreglo[i] << " ";
    }
    
    return 0;
}
