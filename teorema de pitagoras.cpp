#include <iostream> 
#include <cmath>
using namespace std;

int main() {//abertura do codigo
    float cateto1, cateto2, hipotenusa;//nome para os valores que serao usado no calculo
    
    cout << "Digite o comprimento do cateto1: ";//Parte na qual o codigo se comunica com o usuario
    cin >> cateto1;//Valor dado pelo usuario para realizar o calculo
    cout << "Digite o comprimento do cateto2: ";
    cin >> cateto2;
    
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));//local na qual o codigo faz o calculo
    
    cout << "O comprimento da hipotenusa eh: " << hipotenusa << endl;//aqui o codigo se comunica com o usuario mostrando o resultado
    
    return 0;
}