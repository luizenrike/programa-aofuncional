#include <iostream>
using namespace std;

int main(){
    int n = 0, r = 0;
    cout << "Informe o numero para verificar se ele e um quadrado perfeito: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        if(i*i == n)
            r = i;
    }

    if(r == 0) cout << "O numero nao e um quadrado perfeito." << endl;
    else  cout << "O numero e um quadrado perfeito, pois " << r << "* " << r << " gera o numero " << n << endl;

    return 0; 
}