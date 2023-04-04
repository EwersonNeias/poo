#include <iostream> 
#include <string>
using namespace std;

int main() { //int usado para usar valores inteiros
    int life; //ainda usando valores inteiros para life
    int energy; //ainda usando valores inteiros para energy
    bool status;//ainda usando valores inteiros para status
    string character;//colocando o character
    
    life = 10; //colocando valor na life
    energy = 99.99f; //colocando valor na energy
    status = true;//status do personsagem
    character = "Mega Man";//nome do personagem
    
    cout<<life<<endl;//colocando para o usuario o valor da life
    cout<<energy<<endl;//colocando para o usuario o valor da energy
    cout<<status<<endl;//colocando o status do personagem para o usuario
    cout<<character<<endl;//colocando o nome do personagem para o usuario
    
    return 0;
}