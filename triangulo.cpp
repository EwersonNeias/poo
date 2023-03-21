#include <iostream>
using namespace std;

int main () {//abertura do codigo 
    float base, altura, area;//identificação dos dados que serao usado para o calculo
    
    cout << "Digite a base do triangulo: ";//local para se comunicar com o usuario e solicitar o valor do calculo
    cin >> base;//informação do usuario sendo armazenada para o calculo
    cout << "Digite a altura do triangulo: ";
    cin >> altura;
    
    area = (base * altura) / 2;//codigo que ira fazer o calculo com os valores dado pelo usuario
    
    cout << "A area do triangulo eh: " << area << endl;//aqui o codigo se comunica com o usuario entregando o seu resultado do calculo
    
    return 0;
}
