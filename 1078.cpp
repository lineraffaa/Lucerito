#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numero = 0, mult = 0, i = 0;

    cin >> numero;

    for (int i = 1; i <= 10; i++)
    {
        mult = numero * i;
        cout << i << " x " << numero << " = " << mult << endl;
    }
}