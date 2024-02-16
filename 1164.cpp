#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int numero = 0, teste = 0, soma = 0, j;

    cin >> teste;

    for (int i = 0; i < teste; i++)
    {
        cin >> numero;
        for (int j = 1; j < numero; j++)
        {   
            if (numero % j == 0)
            {
                soma += j;
            }
           
        } 
        
        if (soma == numero)
            cout << numero << " eh perfeito" << endl;
        else
            cout << numero << " nao eh perfeito" << endl;
        soma = 0; 
    }
   

}