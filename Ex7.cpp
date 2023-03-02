#include <iostream>

using namespace std;

int soma_divisores(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num;
    
    cout << "Digite um numero inteiro: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (soma_divisores(i) == i) {
            cout << i << " é um número perfeito!" << endl;
        }
    }
}
