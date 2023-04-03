#include <iostream>
using namespace std;

int main () { //int usado para usar os valores inteiros
    float base, altura, area;//palavras bases usadas para fazer o calculo
    
    cout << "Digite a base do triangulo: ";//cout usado para se comunicar com o usuario 
    cin >> base;//cin usado para usar os valores colocados do usuario para o calculo
    cout << "Digite a altura do triangulo: ";//cout usado para se comunicar com o usuario 
    cin >> altura;//cin usado para usar os valores colocados do usuario para o calculo
    
    area = (base * altura) / 2;//aqui se faz o calculo dos valores usados para a soma e resultado
    
    cout << "A area do triangulo eh: " << area << endl;//cout comunicando o usuario o seu resultado
    
    return 0;
}