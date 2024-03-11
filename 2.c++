#include <iostream>
using namespace std;

bool pertenceFibonacci(int x)
{
    int a = 0, b = 1;

    while(a <= x) {
        if(a == x){
            return true;
        }
        int temp = b;
        b = a+b;
        a = temp;
    }
    return false;
}

int main(void){

    int numero;

    cout << "Digite o numero: " << endl;
    cin >> numero;

    if(pertenceFibonacci(numero)){
        cout << "Numero pertence a sequencia Fibonacci!" << endl;
    }else{
        cout << "Numero nao pertence a sequencia Fibonacci" << endl;
    }
    return 0;
}