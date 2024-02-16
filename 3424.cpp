#include <iostream>

#include <string>

using namespace std;

int main()
{
    string letra;
    int numero, acumulador = 0;
    int cont = 0;

    cin >> numero >> letra;

    for (int i = 0; i < numero; i++)
    {
        if (letra[i] == 'a')
        {
            cont++;
        }
        else
        {
            if (cont > 1)
            {
                acumulador += cont;
            }

            cont = 0;
        }
    }
    if (cont > 1)
    {
        acumulador += cont;
    }
    cout << acumulador << endl;
}