#include <iostream>
using namespace std;

int gangorra(int p1, int c1, int p2, int c2){
    int r1 = p1 * c1;
    int r2 = p2 * c2;

    if(r1 == r2) return 0;
    if(r1 > r2) return -1;
    if(r2 > r1) return 1;

}

int main(){
    int p1, p2, c1, c2;
    cout << "Entre com o peso da primeira crianca: ";
    cin >> p1;
    cout << "Entre com o comprimento da primeira crianca: ";
    cin >> c1;

    cout << "Entre com o peso da segunda crianca: ";
    cin >> p2;
    cout << "Entre com o comprimento da segunda crianca: ";
    cin >> c2;
    
    int resultado = gangorra(p1, c1, p2, c2);
    if(resultado == 0) cout << "A gangorra esta equilibrada! " << endl;
    if(resultado == 1) cout << "A crianca da esquerda (p1) esta na parte de baixo! "<< endl;
    if(resultado == -1) cout << "A crianca da direita (p2) está na parte de baixo! "<< endl;

    return 0;
}