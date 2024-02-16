#include <iostream>
#include <iomanip>
#define N 3
using namespace std;

int main(){
    float jogadores, Va[N] = {0}, Vt[N] = {0}, div[N], aux;
    string nome;

    cin >> jogadores;

    for (int i = 0; i < jogadores; i++)
    {   
        cin >> nome;
       for(int j = 0; j < 3; j++){
        cin >> aux;
        Vt[j]+= aux; 
       }
       for(int j = 0; j < 3; j++){
        cin >> aux;
        Va[j]+=aux;
       }
    }
   for (int j = 0; j < N; j++)
    { 
       div[j]= Va[j]/Vt[j];
    
      
    }
    cout << fixed << setprecision(2) << "Pontos de Saque: "<< div[0]*100 << " %."<< endl;
    cout << fixed << setprecision(2) <<"Pontos de Bloqueio: "<< div[1]*100 << " %."<< endl;
    cout << fixed << setprecision(2) << "Pontos de Ataque: "<< div[2]*100 << " %."<< endl;

    
    
    
    
    
    

}