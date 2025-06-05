#include <iostream>

int main(){
    int num1{0}, num2{0};

    std::cout << "Insira dois numeros inteiros" << std::endl;
    std::cin >> num1 >> num2;

    //Soma
    int soma = num1 + num2;
    std::cout << "Soma: " << soma << std::endl;
    //Produto
    int produto = num1 * num2;
    std::cout << "Produto: " << produto << std::endl;
    //Media
    int media = (num1 + num2) / 2;
    std::cout << "Media: " << media << std::endl;
    //Diferenca
    int diferenca = num1 - num2;
    std::cout << "Diferenca: " << diferenca << std::endl;
    //Quociente da divisao
    int quociente = num1 % num2;
    std::cout << "Quociente: " << quociente << std::endl;

    return 0;
}