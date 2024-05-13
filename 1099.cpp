#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int casos = 0, valor = 0, valor2 = 0, cont = 0, soma = 0, maior = 0, menor = 0,j = 0;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {

        cin >> valor >> valor2;

        if (valor > valor2)
        {
            maior = valor;
            menor = valor2;
        }
        else
        {
            maior = valor2;
            menor = valor;
        }
                
        for (int j = menor + 1; j < maior; j++)
        {  
           
            
            if (j % 2 == 1)
            {
                soma +=j;
                
            }
           
        }
      
       
        cout << soma << endl;
        soma = 0;
       
    }
}
