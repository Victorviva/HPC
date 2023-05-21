#include <iostream>
#include <vector>

struct MiEstructura {
    int enteros[5];
    char caracter;
    float flotante;
};

int main() {
    std::cout << "Tamaños de variables básicas:" << std::endl;
    std::cout << "bool, tamaño: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char, tamaño: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "int, tamaño: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "float, tamaño: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double, tamaño: " << sizeof(double) << " bytes" << std::endl;

    MiEstructura miVariable;
    std::cout << "Tamaño de la estructura MiEstructura: " << sizeof(miVariable) << " bytes" << std::endl;

    std::vector<float> miVector;
    std::cout << "Tamaño del vector std::vector<float>: " << sizeof(miVector) << " bytes" << std::endl;

    return 0;
}
