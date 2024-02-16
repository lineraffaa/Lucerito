#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    int numero, cont, mult;
    cin >> numero;

    for(int i = 1; i <= numero; i++){
        
        if(i%2 == 0){
          mult = i*i;
        cout << i << "^2 = " << mult << endl;
        }
        
  
    }
    
}