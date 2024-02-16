#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x, y;

    while (cin >> x >> y)
    {

        if (x > y)
        {
            cout << "Decrescente" << endl;
        }
        if (x < y)
        {
            cout << "Crescente" << endl;
        }
        if(x == y){
            break;
        }
    }
}