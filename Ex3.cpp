#include <iostream>

using namespace std;

bool isPrime(int num) {
  if (num < 2) {
    return false;
  }
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
  int n;
  
  cout << "Digite um número inteiro: ";
  cin >> n;
  
  cout << "Números primos menores ou iguais a " << n << ": ";
  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }
  cout << endl;
  
}
