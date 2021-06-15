#include <iostream>
#include <vector>
#include <conio.h>
#include <time.h>

#define MAX 100
using namespace std;

int main(){

    int tamanho = 0, n = 0, contador = 0;
    srand(time(NULL)); // iniciando gerador de numeros aleatorios

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
    cout << "Informe o numero para verificar os maiores que ele na lista:  ";
    cin >> n;
    
    for(int j = 0; j < tamanho; j++){
        if(vetor[j] > n)
            cout << vetor[j] << " ";
    }

    return 0;
}