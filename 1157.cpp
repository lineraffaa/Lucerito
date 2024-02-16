#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int number = 0,i =0;
    cin >> number;
    
    for(int i = 1; i <= number; i++){
        if (number % i == 0){
            cout << i << endl;
        }
        
        }

}
