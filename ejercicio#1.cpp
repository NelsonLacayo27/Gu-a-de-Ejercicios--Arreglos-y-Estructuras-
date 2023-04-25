#include <iostream>

int main() {
    char arreglo[] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};
    
    for (int i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++) {
        std::cout << arreglo[i] << " ";
    }
    
    return 0;
}
