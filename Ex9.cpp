#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, qtd;
	
	cout << "Informe o numero para tabuada: ";
	cin >> numero;
	
	cout << "Informe até quantos você quer que vai: ";
	cin >> qtd;
	
	
	for(int x = 0; x <= qtd; x++){
		cout << numero << " x " << x << " = " << numero * x << endl;
	} 

}
