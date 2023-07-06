#include <iostream>

#include <vector>

 struct Estructura {   //Definir una estructura struct

    float Float[1];
    char Char;
    bool Bool;
    int Int;
    double Double;
};

int main() {

    std::cout << "Tamaños de variables básicas:" << std::endl;
    std::cout << "tipo_de_variable , bool, tamaño : " << sizeof(bool) << " bytes " << std::endl; //tamaño de una variable en bytes con la función sizeof()
    std::cout << "tipo_de_variable , char, tamaño : " << sizeof(char) << " bytes" << std::endl;
    std::cout << "tipo_de_variable , int, tamaño : " << sizeof(int) << " bytes" << std::endl;
    std::cout << "tipo_de_variable , float, tamaño : " << sizeof(float) << " bytes" << std::endl;
    std::cout << "tipo_de_variable , double, tamaño : " << sizeof(double) << " bytes" << std::endl;

    Estructura testEstructura;  // Declarar una variable de tipo Estructura
    std::cout << "Tamaño de la variable Estructura: " << sizeof(testEstructura) << " bytes" << std::endl;
    std::vector<float> testVector;  // Declarar una variable de tipo std::vector<float>
    std::cout << "Tamaño de un vector std::vector<float>: " << sizeof(testVector) << " bytes" << std::endl;

    return 0;

}
