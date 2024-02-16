#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int valor = 0, cont = 0;

    for(int i = 0; i < 5; i++){
        cin >> valor;
        
        if(valor%2 == 0){
            cont++;
        }
    } 
    cout << cont << " valores pares" << endl;
}