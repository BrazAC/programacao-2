#include <iostream>

int main(){
    float raio{0.0f};

    std::cout << "Insira o raio: " << std::endl;
    std::cin >> raio;

    std::cout << "Diametro: " << raio * 2 << std::endl;
    std::cout << "Circunferencia: " << 2 * 3.14159 * raio << std::endl;
    std::cout << "Area: " << 3.14159 * (raio * raio) << std::endl;

    return 0;
}