#include <iostream>
using namespace std;

int main() {//area usada para inicar o codigo
    float cateto1, cateto2, area;//local na qual identificamos os valores que o usuario ira usar
    
    cout << "Digite o valor do cateto1 do triangulo retangulo: ";//local no qual o codigo se comunica com o usuario
    cin >> cateto1;//aqui o codigo armazena o valor dado pelo usuario para usar no calculo
    cout << "Digite o valor da cateto2 do triangulo retangulo: ";
    cin >> cateto2;
    
    area = (cateto1 * cateto2) / 2;//aqui o codigo ira efetuar o calculo usando os valores dado pelo
    
    cout << "A area do triangulo retangulo: " << area << endl;//por fim o codigo da o resultado do calculo para o usuario se comunicando com ele
    
    return 0;
}