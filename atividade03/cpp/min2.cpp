#include <iostream>
using namespace std;

int minimo(int a, int b){
    if(a < b) return a;
    else return b;
}

int main(){
    int a, b;
    cout << "Entre com dois numeros: " << endl;
    cin >> a >> b;
    cout << "O menor numero entre os dois e: " << minimo(a, b) << endl;
    return 0;
}