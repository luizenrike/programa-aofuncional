#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Entre com dois valores: ";
    cin >> a >> b;

    for(int i=b; i < a+b; i++){
        cout << i << " ";
    }
 
    return 0;
}