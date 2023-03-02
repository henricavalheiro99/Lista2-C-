#include <iostream>

using namespace std;

void fibonacci(int n) {
  int term1 = 0, term2 = 1, nextTerm;
  
  cout << "Sequência de Fibonacci até o " << n << "º termo:" << endl;
  for (int i = 0; i < n; i++) {
    if (i <= 1) {
      nextTerm = i;
    } else {
      nextTerm = term1 + term2;
      term1 = term2;
      term2 = nextTerm;
    }
    cout << nextTerm << " ";
  }
  cout << endl;
}

int main() {
		setlocale(LC_ALL, "Portuguese");
	
  int n;
  cout << "Digite um número inteiro: ";
  cin >> n;
  fibonacci(n);
  return 0;
}
