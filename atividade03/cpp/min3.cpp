#include <iostream>
using namespace std;

int minimo(int a, int b, int c){
    int aux = a;
    int min = 0;
    if(b < aux) min = b;
    if(c < aux) min = c;
    return min;
}

int main(){
    int a, b, c;
    cout << "Entre com tres numeros: " << endl;
    cin >> a >> b >> c;
    cout << "O menor numero entre os tres e: " << minimo(a, b, c) << endl;
    return 0;
}