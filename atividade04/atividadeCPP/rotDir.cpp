#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void rotEsq(string &palavra, int n){
    reverse(palavra.begin(), palavra.begin()+n);
    reverse(palavra.begin()+n, palavra.end());
    reverse(palavra.begin(), palavra.end());
}

void rotDir(string &palavra, int n){
    rotEsq(palavra, palavra.length()-n);
}
 
int main()
{
    string palavra = "abcdefghij";
    int n;
    cout << "Informe a quantidade de vezes que ira rotacionar a palavra: ";
    cin >> n;
    rotDir(palavra, n);
    cout << palavra << endl;

    return 0;
}