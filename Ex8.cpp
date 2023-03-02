#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, i;
    int vet[100];
    
    cout << "Digite um número inteiro: ";
    cin >> num;

	i = 0;
	while (num > 1) {
		vet[i] = num % 2;
		num = num / 2;
		
		if(num == 0 || num == 1) {
			vet[i + 1] = num;
		}
		i++;
	}
	
	while (i >= 0) {
		cout << vet[i];
		i--;
	}

  
}

