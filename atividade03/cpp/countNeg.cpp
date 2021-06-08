#include <iostream>
using namespace std;
int main(){
    int lista[5];
    int contador = 0;
    int negativos = 0;
    cout <<"Passe cinco numeros para a lista: " << endl;
    while(contador < 5){
        cin >> lista[contador];
        if(lista[contador] < 0)
            negativos++;
        contador++;
    }
    cout << "A lista repassada possui: " << negativos << " numeros negativos" << endl;

    return 0;
}
