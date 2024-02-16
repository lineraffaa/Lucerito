#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    float numero = 0, positivos = 0, media = 0, valores = 0;
    int cont = 0;
    
   
        for(int i = 0; i < 6; i++){
            cin >> valores;
            if (valores > 0)
            {
            positivos +=  valores;
            cont++; 
            }
            media = positivos/cont;
        }
        
       cout << cont << " valores positivos" << endl;
       cout  << fixed << setprecision(1) << media <<endl; 
    }
  

    

