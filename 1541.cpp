#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, area, calculo, raiz;
    
    
    while (true)
    {
        cin >> a;
        if(a == 0) 
            break;
        cin >> b >> c;
        area = a*b;
        calculo = (area*100)/c;
        raiz = sqrt(calculo);
        cout << raiz << endl;
    }
}