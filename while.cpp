#include <iostream> 
using namespace std;

int main() { //usado para numeros inteiros
    int num, i = 1;//usado para dar continuidade nos numeros
    //aqui o codigo faz o contato com o usuario para saber o numero inteiro
    cout << "Digite um numero inteiro positivo: ",
    cin >> num;
    
    while (i <= num) {//calculado usado para fazer a contagem
        cout << i << " ";
        i++;//usando o i++ para a sequencia
    }
    
    return 0;
}