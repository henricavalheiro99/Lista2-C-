#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num;
    
    cout << "Digite um número inteiro: ";
    cin >> num;

    for (int i = 1; i <= 100; i++) {
        if (i % num == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
}






