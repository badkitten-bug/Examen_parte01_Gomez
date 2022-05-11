//PREGUNTA 2
#include<iostream>
#include <math.h>
using namespace std;
int main(){
	
	int num, numero, contador=0, potencia=1, digito;
	cout<<"N: ";
	cin>>numero;
	
	//creamos una variable auxiliar para hallar el numero de digitos 
	num = numero;
	
	//hallar cantidad de digitos
	do{
		if(num<10){
			contador = 1;
		}
		else {
			contador = contador+1;
		}
		num=num/10;
	}while(num>10);
	
	//hallamos la potencia de 10 entre la que dividiremos el número
	for(int i =0; i<contador; i++){
		potencia = potencia *10;
	}
	cout<<numero /potencia<<endl;
	do{
		
		digito = numero % potencia / (potencia/10);
		cout<<digito<<endl;
		potencia = potencia/10;
	}while(potencia!=0);
	
}


