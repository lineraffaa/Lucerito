#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double casos = 0, litros = 0, pessoas = 0, menorb = 0, maiorb = 0, h = 0;
    double v = 0, v2 = 0, rm = 0, pi = 3.141592653, H = 0;

    cin >> casos;
    for (int i = 0; i < casos; i++)
    {

        cin >> pessoas >> litros;

        cin >> menorb >> maiorb >> h;
        
        litros = litros/pessoas;

        rm = pow((3.0*litros * (maiorb-menorb)/(pi*h)+ pow(menorb,3.0)),1.0/3.0);
        
        v = litros*3.0; 
        v2 = pi*((pow(rm,2)) +  (rm * menorb) + (pow(menorb,2)));
        
        H = v/v2;

        cout << fixed << setprecision(2) << H << endl;


    }
}
