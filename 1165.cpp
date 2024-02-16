#include <iostream>

using namespace std;

int main()
{
    int num, num2, cont = 0;
    cin >> num;
    for (int i = 0; i < num; ++i)
    {
        cin >> num2;
        for (int j = 1; j < num2; ++j)
        {
            if (num2 % j == 0)
            {
                cont++;
            }
        }
        if (cont > 1)
        {
            cout << num2 << " nao eh primo" << endl;
        }
        else
        {
            cout << num2 << " eh primo" << endl;
        }

        cont = 0;
    }
    return 0;
}