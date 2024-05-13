#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int number = 0, nu = 1;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {   
        nu *= i;
    } 
    cout << nu << endl;
}/*i < 4 i = 4 (i) = 1 valendo.. i < 4, i = 4 (i) = 2 valendo.. i < 4, i = 4 (i) = 3 valendo.. i <= 4, (i) = 4 valendo */ 
/* (nu) recebe e multiplica os valores de (i)*/