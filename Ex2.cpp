#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, soma = 0;
    
    cout << "Digite um numero inteiro: ";
    cin >> num;

    

    soma += num % 10; // adiciona o último dígito à soma
    num /= 10; // remove o último dígito do número

    soma += num % 10; // adiciona o segundo dígito à soma
    num /= 10; // remove o segundo dígito do número

    soma += num; // adiciona o primeiro dígito à soma

    cout << "A soma dos digitos do numero é: " << soma << endl;

   
}
