#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0)
        return 0;
    if((n == 1) || (n == 2))
        return 1;
    else
        return fib (n - 2) + fib (n - 1);
}

int main(){
    int n = 0;
    cout << "Informe um numero: ";
    cin >> n;

    cout << "Fibonacci de " << n << ": " << fib(n) << endl;

    return 0;
}
