//Pregunta 4
#include<iostream>

using namespace std;

int main()
{
    int numero, contador = 0;
    
        cout << "N: ";
        cin >> numero;

        for (int i = 1; i < numero; i++)
        {
            if (numero%i == 0)
                contador += i;
        }
        if (numero == contador)
        {
            cout <<"Si es perfecto";
        }
        else
        {
            cout <<"No es perfecto";
        }
      

    return 0;
}


