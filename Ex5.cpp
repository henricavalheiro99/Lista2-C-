#include <iostream>

using namespace std;

int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
		
	
  int n;
  
  cout << "Digite um n�mero inteiro: ";
  cin >> n;
  cout << n << "! = " << factorial(n) << endl;

}
