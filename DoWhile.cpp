#include <iostream> 
using namespace std;

int main() {//usado para identificar numeros inteiros
    int num;
    //usado para se comunicar com o usuario para saber o valor
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    //aqui o codigo se comunica com o usuario para informar o resultado
    cout << "Os primeiros " << num << "Numeros pares são: ";
    
    for (int i = 2; i <= num * 2; i += 2) {//aqui o codigo executa
        cout << i << " ";
    }
    
    return 0;
}
    