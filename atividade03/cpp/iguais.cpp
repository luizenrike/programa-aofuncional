#include <iostream>
using namespace std;

int iguais(int a, int b, int c){
    if((a == b) && (b ==c)) return 3;
    if((a == b) && (b != c) || (a != b) && (b == c)) return 2;
    else return 0;

}

int main(){
    int a, b, c;
    cout << "Entre com tres valores: " << endl;
    cin >> a >> b >> c; 
    int resultado = iguais(a, b, c);
    cout << "Sao iguais: " << resultado << " numeros" << endl;

    return 0;
}