#include <iostream>
#include <vector>
using namespace std;

void primeFactors(int n) {
  vector<int> factors;
  for (int i = 2; i <= n; i++) {
    while (n % i == 0) {
      factors.push_back(i);
      n /= i;
    }
  }
  if (factors.size() == 0) {
    cout << "O número " << n << " é primo" << endl;
  } else {
    cout << "Fatores primos de " << n << ": ";
    for (int i = 0; i < factors.size(); i++) {
      cout << factors[i] << " ";
    }
    cout << endl;
  }
}

int main() {
		setlocale(LC_ALL, "Portuguese");
		
  int n;
  
  cout << "Digite um número inteiro: ";
  
  cin >> n;
  primeFactors(n);
  
} 

