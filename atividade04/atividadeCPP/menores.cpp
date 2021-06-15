#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;
#define MAX 100


int main(){

    int tamanho = 0;
    int n = 0;

    cout << "Informe o tamanho da lista: ";
    cin >> tamanho;

    int vetor[tamanho];
    srand(time(NULL)); // iniciando gerador de lista aleatorio

    cout << "Lista gerada aleatoriamente: ";
    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand()%MAX;
        cout << vetor[i] << " ";
    }
    cout << endl;
    cout << "Informe a quantidade de menores que deseja obter: ";
    cin >> n;

    int menor[n];
    menor[0] = MAX; 


    for(int i = 0; i < n; i++){
        for(int j = 1; j < tamanho; j++){
            if(vetor[j] < menor[i])
                menor[i] = vetor[j];
        }
    }

    cout << "Menores da lista: ";
    for(int h = 0; h < n; h++){
        
        cout << menor[h] << " ";
    }

    return 0;
}
