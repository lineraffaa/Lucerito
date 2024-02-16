#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string palavra, minuscula;
    int casos, tam;

    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> palavra;
        tam = palavra.length();
       
        for (int j = tam-1; j >= 0; j--)
        {  
            if (palavra[j] >= 97 && palavra[j] <= 122)
            {
                minuscula += palavra[j];
               
            }
        }
        cout << minuscula << endl;
        minuscula = "";
    }
    
    
    
}