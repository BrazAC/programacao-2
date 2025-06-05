#include <iostream>

int main(){
    float num{0.0f}, n, quociente{0.0f}, parte_frac{0.0f};


    std::cout << "Insira o valor: " << std::endl;
    std::cin >> num;

    
    for (int i = 4; i > -1; i--) {
        //Potencia de 10
        int pot{1};
        for (int j = 0; j < i; j++){
            pot = pot * 10;
        }

        quociente = num / pot;
        int quociente_trunc = quociente;
        parte_frac = quociente - quociente_trunc;
        n = quociente - parte_frac;
        num = parte_frac * pot;

        std::cout << n << "   ";
    }
    std::cout << std::endl;

    
    return 0;
}