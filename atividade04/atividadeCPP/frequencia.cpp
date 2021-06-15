#include <iostream>
#include <vector>

using namespace std;

int frequencia (int point[], int n){
    int contador = 0;
    for(int i = 0; i < 20; i++){
        if(point[i] == n)
            contador++;
    }

    return contador;
}

int main(){
    
    int vetor[20] = {0, 2, 5, 14, 32, 5, 27, 58, 68, 45, 12, 16, 1, 2, 1, 2, 9, 8, 4, 10};
    int n = 0;
    cout << "Dado uma lista, digite um numero para saber quantas vezes ele aparece na lista: ";
    cin >> n;
    int resultado = frequencia(vetor, n);
    if(resultado == 0) cout << "Esse numero nao aparece nenhuma vez na lista." << endl;
    else cout<< "Esse numero aparece " << resultado << " vezes na lista.";

    return 0;

}