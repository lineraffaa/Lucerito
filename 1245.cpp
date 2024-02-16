#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int casos = 0, numero, cont = 0, numerobt = 0, j, par = 0;

    char l;

    while (cin >> casos)
    {
        vector<int> numerodir(61, 0);
        vector<int> numeroesq(61, 0);

        for (int i = 0; i < casos; i++)
        {

            cin >> numerobt >> l;

            if (l == 'D')
            {
                numerodir[numerobt] += 1;
            }
            else
            {
                numeroesq[numerobt] += 1;
            }
        }
        for (int j = 30; j <= 60; j++)
        {
            if (numerodir[j] >= numeroesq[j])
            {
                par += numeroesq[j];
            }
            else
                par += numerodir[j];
        }
        cout << par << endl;

        par = 0;
    }
}
