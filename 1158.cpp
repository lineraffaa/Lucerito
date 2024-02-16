#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int casos, valorx, valory, somax,cont;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        somax = 0;
        cont = 0;
        cin >> valorx >> valory;
        while (cont < valory)
        { 
            
          if (valorx % 2 != 0)
            {
                somax += valorx;
                cont++;
            }
            valorx++;
        }
       
        cout << somax << endl;
        
    }
}