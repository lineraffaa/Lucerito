#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int valorx = 0, cont = 0;
    cin >> valorx;

    while (cont < 6)
    {
      
        if (valorx % 2 == 1)
        {
         cout << valorx << endl;
         cont++;
        }
        valorx++;
        
    }
}