#include <iostream>

int main(){
    int idade{0}, freq_max{0}, freq_alvo{0};

    std::cout << "Informe sua idade: ";
    std::cin >> idade;

    freq_max = 220 - idade;

    freq_alvo = freq_max * (static_cast<float>(50) / 100);

    std::cout << "Max: " << freq_max << std::endl;
    std::cout << "Alvo: " << freq_alvo << std::endl;

    return 0;
}