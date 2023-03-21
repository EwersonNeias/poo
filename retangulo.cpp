#include <iostream>
using namespace std;

int main() { //int main usado para abertura do codigo
    float base, altura, area;//float usado para especificar os valores
    
    cout << "Digite a base do retangulo: ";//cout usado para se comunicar com o usuario
    cin >> base;//cin usa o valor especificado pelo usuario para efetuar o calculo
    cout << "Digite a altura do retangulo: ";
    cin >> altura; 
    
    area = (base * altura) / 2;//area na qual programa faz o calculo sobre os valores usado para o resultado do calculo
    
    cout << "A area do retangulo eh: " << area << endl;//mostra o resultado do calculo para o usuario

    return 0;
}