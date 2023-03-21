#include <iostream>
using namespace std;

int main() {//usado para abertura do codigo
    float raio, area;//area usada para identificar os valores do calculo
    const float PI = 3.14159;//valor usado como base para o resultado do calculo
    
    cout << "Digite o raio do circulo: ";//usado para se comunicar com o usuario e solicitar o valor
    cin >> raio;//usa o valor do usuario para armazenar
    
    area = PI * raio * raio;//area na qual se faz o calculo usando os valores informado pelo usuario
    
    cout << "A area do circulo eh: " << area << endl;//area que ira se comunicar com o usuario monstrando o resultado do calculo

    return 0;
    }
