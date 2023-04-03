#include <iostream> 
#include <cmath> 
using namespace std;

int main() { //int main usado para abertura do codigo
    float a, b, c, x1, x2, delta;//float usado para especificar os valores
    
    cout << "Digite o valor de a: ";//cout usado para se comunicar com o usuario
    cin >> a; //cin usa o valor especificado pelo usuario para efetuar o calculo
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    
    delta = pow(b, 2) - 4 * a * c;
    
    if (delta >= 0) { //Aqui onde o codigo faz a conta 
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl; //Aqui o codigo se comunica com o usuario
    }
    else {
        cout << "A equacao nao tem raizes reais." << endl;
    } //Aqui o codigo se comunica com o usuario
    
    return 0;
    }