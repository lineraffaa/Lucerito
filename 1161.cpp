#include <iostream>
#include <iomanip>

using namespace std;

long long int fat(long long int v1)
{
    long long int result = 1;
    for (int i = v1; i > 0; i--){
        result = result * i;
    }
    return result;
}

int main()
{
    long long int valor = 0, valor2 = 0, result = 0;

    while (cin >> valor >> valor2)
    {
        result = fat(valor) + fat(valor2);
        cout << result << endl;
        result = 0;
    }
    return 0;
}