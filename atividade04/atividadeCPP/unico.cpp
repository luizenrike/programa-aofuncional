#include <iostream>
#include <vector>
#include <conio.h>
#include <time.h>

#define MAX 100
using namespace std;

int main(){
    int tamanho = 0, n = 0, contador = 0;
    srand(time(NULL));
    cout << "Informe o tamanho da lista: ";
    cin >> tamanho;
    int vetor[tamanho];
    cout << "Lista obtida aleatoriamente: [";
    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand()%MAX; // gerando numeros aleatorios na lista
        cout << vetor[i] << " "; // printando o vetor gerado aleatório
    }
    cout << "]";
    cout << endl;
    cout << "Informe o numero para verificar se ele e unico: ";
    cin >> n;
    
    for(int j = 0; j < tamanho; j++){
        if(vetor[j] == n)
            contador++;
    }

    if((contador == 1) && (tamanho == 1)) cout << "True";
    else cout << "False";

    return 0;
    
}

