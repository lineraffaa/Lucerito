#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int valor = 0, contpar = 0, contimpar = 0, contpos = 0, contneg = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> valor;
        
        
        if (valor%2 == 0)
        { 
          
            contpar++;
        }
        
        if (valor%2 != 0)
        {
            contimpar++;
        }
       
        if (valor > 0)
        {
            contpos++;
        }

        if (valor < 0)
        {
            contneg++;
        }
        
    }
    cout << contpar << " valor(es) par(es)" << endl
         << contimpar << " valor(es) impar(es)" << endl
         << contpos << " valor(es) positivo(s)" << endl
         << contneg << " valor(es) negativo(s)" << endl;
}