#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, soma = 0;
    
    cout << "Digite um numero inteiro: ";
    cin >> num;

    

    soma += num % 10; // adiciona o �ltimo d�gito � soma
    num /= 10; // remove o �ltimo d�gito do n�mero

    soma += num % 10; // adiciona o segundo d�gito � soma
    num /= 10; // remove o segundo d�gito do n�mero

    soma += num; // adiciona o primeiro d�gito � soma

    cout << "A soma dos digitos do numero �: " << soma << endl;

   
}
