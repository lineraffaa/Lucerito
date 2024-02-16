#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int valor = 0, valor2 = 0, resultado = 0;

    cin >> valor >> valor2;

    
    if (valor%valor2 == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else 
        if (valor2%valor == 0){
            cout << "Sao Multiplos" << endl;
        }
    else
    {
        cout << "Nao sao Multiplos" << endl;
    }
}