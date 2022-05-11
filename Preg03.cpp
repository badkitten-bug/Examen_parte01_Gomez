#include <iostream>
using namespace std;

int main() {

	int numero,a,b,c;

	cout << "INTRODUZCA UN NUMERO: ";
	cin >> numero;
	cout << endl;

		a=numero;
		c=0;
		b=0;

	while(a!=0) {
		b=a%10;
		a=a/10;
		c=c*10+b;
	}

	if(c==numero)
	cout << endl << " EL NUMERO " << numero << " SI ES CAPICUA" << endl << endl;

	else
	cout << endl << " EL NUMERO " << numero <<" NO ES CAPICUA "<< endl << endl;

return 0;
}
