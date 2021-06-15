#include <iostream>
using namespace std;

void alter(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " " << -i << " ";
    }
}

int main(){

    int n;
    cout << "Informe o numero de itens na lista: ";
    cin >> n;

    alter(n);
    
    return 0;
}