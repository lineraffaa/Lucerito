#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int senha;

    while (senha != 2002)
    {
        cin >> senha;
        if (senha == 2002)
        {
            cout << "Acesso Permitido" << endl;
        }
        else
            cout << "Senha Invalida" << endl;
    }
}