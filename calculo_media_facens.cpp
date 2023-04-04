#include <iostream>
#include <stdlib.h>
using namespace std;
//inserindo bibliotecas
int main() {
    //aqui nos identificamos as medias
    double ac1, ac2, af;
    cout << "Digite a sua nota da ac1 >>>";
    //aqui o codigo pede ao usuario sua nota
    cin >> ac1;
    //o codigo usa a nota informada
    cout << "Digite a sua nota da ac2 >>>";
    //aqui o codigo pede ao usuario sua nota
    cin >> ac2;
    //o codigo usa a nota informada
    cout << "Digite a sua nota da af >>>";
    //aqui o codigo pede ao usuario sua nota
    cin >> af;
    //o codigo usa a nota informada
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    af = (af * 0.50);
    //aqui o codigo ira fazer a media para saber se o usuario foi aprovado ou reprovado, com maior ou menor
    double soma = (ac1 + ac2 + af);
    //fazendo a soma das medias informadas
    cout << "A sua média do semestre foi: " << soma << endl << endl;//aqui o codigo se comunica informando a media
    if (soma >= 5) {
        cout << "Parabéns! Você foi aprovado!" << endl;
    }else{//aqui se ele foi aprovado, se comunicando com o usuario
        cout << "Eita! Você foi reprovado" << endl;
    }//e aqui se ele foi reprovado
    return 0;

}