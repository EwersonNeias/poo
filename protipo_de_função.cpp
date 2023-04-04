#include <iostream> 
using namespace std;

int soma(int a , int b);//aqui nomemaos nosso inteiro

int main()
{ 
    cout << soma (2,5) << endl;//usamos o codigo para fazer a soma e resultar a saida
}

int soma (int a , int b)//fazendo a base do calculo
{
    int Resultado;
    Resultado = a + b;//resultado da função
    return Resultado;
}