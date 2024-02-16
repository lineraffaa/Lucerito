#include <iostream>
#include <iomanip>
#define N 10
using namespace std;

int main()
{
    int vector[N], i = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> vector[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (vector[i] <= 0)
        {
            vector[i] = 1;
        }
        cout << "X[" << i << "] = " << vector[i] << endl;
    }
}