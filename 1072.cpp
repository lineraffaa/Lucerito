#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int valores = 0, numero = 0, cont = 0, cont2 = 0;

    cin >> valores;
    for (int i = 0; i < valores; i++)
    {
        cin >> numero;
    
        if(numero > 9 && numero < 21){
            cont++;
           
            
        }else
        {
            cont2++;
           
        }
        
    }   
    
    cout << cont << " in" << endl;
    cout  << cont2 << " out" << endl;
    



}