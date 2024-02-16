#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int valor = 2, soma = 0;

    while (valor != 0)
    {
        cin >> valor;
        if (valor == 0)
            break;
        for (int i = 0; i < 5; i++)
        {
            if (valor % 2 == 0)
            {
                soma += valor;
                valor += 2;
            }
            else
            {
                valor += 1;
                soma += valor;
                valor += 2;
            }
        }

        cout << soma << endl;
        soma = 0;
    }
}