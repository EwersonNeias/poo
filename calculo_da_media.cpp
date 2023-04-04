#include <iostream> 
#include <stdlib.h>
using namespace std;

int main() {//faz o calculo e usa os valores inteiros
    
    double nota1, nota2, nota3, nota4;//identifica os nomes relacionados as notas e valores diferenciando eles
    cout << "Digite a sua primeira nota do semeste >>> ";
    cin >> nota1;//conversa com o usuario para informar os valores
    cout << "Digite a sua segunda nota do semeste >>> ";
    cin >> nota2;//conversa com o usuario para informar os valores
    cout << "Digite a sua terceira nota do semestre >>> ";
    cin >> nota3;//conversa com o usuario para informar os valores
    cout << "Digite a sua quarta nota do semestre >>> ";
    cin >> nota4;//conversa com o usuario para informar os valores
    double soma = (nota1 + nota2 + nota3 + nota4);
    soma = (soma / 4);//aqui o codigo faz a soma e divide o valor dado pelo usuario, informando o resultado final
    cout << "A sua media do semestre foi: " << soma << endl << endl;//aqui o codigo informa a media do usuario que utilizou
    if(soma >= 7){
        cout << "Parabéns! você foi aprovado!" << endl;
    }else{//aqui se a media foi maior que 7 o usuario foi aprovado
        cout << "Eita! Você foi reprovado!" << endl;//aqui o codigo se comunica com o usuario caso sua nota tenha sido menor que 7, ele foi reprovado
    }
    return 0;
}