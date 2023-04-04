#include <iostream>

using namespace std;

int main() {//int faz o uso dos valores inteiros
    int a = 5;//identifica a como valor 5
    int b = 10;//identifica a como valor 10
    int c = 15;//identifica o c como valor 15
    
    if (a < b && b < c) {//aqui o if faz o calculo da diferença do a, b e c
        cout << "A ordem é: a, b, c" << endl;//aqui o cout se comunica com o usuario informando pra ele as diferença
    }
    if (a > b || b > c) {//aqui o if faz o calculo da diferença do a, b e c
        cout << "Pelo menos uma das condições é verdadeira" << endl;//aqui o cout se comunica com o usuario informando pra ele as diferença
    }
    if (!(a == b)) {//aqui o if faz o calculo da diferença do a, b e c
        cout << "a é diferente de b" << endl;//aqui o cout se comunica com o usuario informando pra ele as diferença
    }
    
    return 0;
}