#include <iostream>
using namespace std;

int maximo(int a, int b, int c){
    int aux = a;
    int maximo = 0;
    if(b > aux) maximo = b;
    if(c > aux) maximo = c;
    return maximo;
}

int main(){
    int a, b, c;
    cout << "Entre com tres numeros: " << endl;
    cin >> a >> b >> c;
    cout << "O maior numero entre os tres e: " << maximo(a, b, c) << endl;
    return 0;
}