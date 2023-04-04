#include <iostream> 
using namespace std;

int main() {//aqui o codigo usa os valores inteiros
    char op;
    float num1, num2;//identificando os dois nomes usados para os valores que serão usados
    cout << "ENTRE COM O OPERADOR: +, -, *, /: ";//aqui o codigo pede o operador para entrar
    cin >> op;
    cout << "ENTRE COM DOIS VALORES: ";//aqui o codigo pede os valores para a soma
    cin >> num1 >> num2;//usando os valores identificados
    
    switch(op) {
        case '+'://usando o + para a soma
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-'://usando o - para a subtração
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case '*'://usando o * para a multiplicação
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/'://usando o / para a divisão 
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        default:
        cout << "OPERADOR ERRADO, POR FAVOR INSIRA O OPERADOR CORRETO";//aqui o codigo se comunica com o usuario para informar o erro no operador informado
        break; 
    }
    return 0;
    }