
#include <iostream>
#include <iomanip>

int main() {
    double arreglo[] = {95.75, 87.91, 85.72};
    
    for (int i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++) {
        std::cout << std::setw(8) << std::fixed << std::setprecision(2) << arreglo[i] << " ";
    }
    
    return 0;
}

