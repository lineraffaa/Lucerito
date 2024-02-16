#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main(){
    int testes = 0, cont = 0;
    float tempo = 0, aux = INT64_MAX;
    
    while (cin >> testes)
    {
        for (int i = 0; i < testes; i++)
        { 
            cin >> tempo;        
            if(tempo < aux)
                aux = tempo;
        }
        
        cout << fixed << setprecision(2) << aux << endl;
        aux = INT64_MAX;
    }
    
}