#include <iostream>
using namespace std;

int fatorial(int n){
    if((n == 0) || (n == 1))
        return 1;
    else
        return fatorial(n-1) * n;
}

int main(){
    int valor = 0;

    cout << "Fatorial do numero: ";
    cin >> valor;
    cout << "O fatorial e: " << fatorial(valor) << endl;
    return 0;
}