#include <iostream>
using namespace std;

void final(int vetor[6], int elementos){
    if(elementos == 0) return;
    if(elementos == 1) cout << vetor[6];
    int finais = 6 - elementos;
    for(int i = finais; i < 6; i++){
        cout << vetor[i] << " ";
    }
    
}

int main(){
    int vetor[6];
    int contador = 0;
    int elementos = 0;
    cout << "Preencha o vetor com seis numeros: " << endl; //2,5,4,7,9,6
        while(contador < 6){
            cin >> vetor[contador];
            contador++;
        }
    cout  << "Informe quantos elementos finais deseja obter do vetor: ";
    cin >> elementos;
    final(vetor, elementos);
    return 0;

}