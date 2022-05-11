#include<iostream>

using namespace std;

int main(){
	
	double numero, a = 3, b = 5, fa = 1, fb=1 , division, resultado;
	cout<<"N: ";
	cin>>numero;
	for(int i=0; i<numero; i++){
		
		for(int j=1; j<=a; j++){
			fa = fa * j;
		}
		for(int k=1; k<=b; k++){
			fb = fb * k;
		}
		division= fa/fb;
		a = a+1;
		b = b+1;
		resultado = resultado + division;
		fa=1;
		fb=1;
	}
	cout<<resultado;
	
	return 0;
}


