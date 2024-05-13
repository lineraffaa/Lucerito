#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, maior, meio, menor;

    cin >> A >> B >> C;

    if (A >= B && A >= C)
    {

        maior = A;
        meio = B;
        menor = C;
    }

    if (B >= A && B >= C)
    {

        maior = B;
        meio = A;
        menor = C;
    }

    else
    {

        maior = C;
        meio = A;
        menor = B;
    }

    if (maior >= meio + menor)
    {
        cout << ("NAO FORMA TRIANGULO") << endl;
    }
    else
    {

        if (maior == (pow(meio, 2) + pow(menor, 2)))
        {
            cout << ("TRIANGULO RETANGULO") << endl;
        }

        if (pow(maior, 2) > (pow(meio, 2) + pow(menor, 2)))
        {
            cout << ("TRIANGULO OBTUSANGULO") << endl;
        }

        if (pow(maior, 2) < pow(meio, 2) + pow(menor, 2))
        {

            cout << ("TRIANGULO ACUTANGULO") << endl;
        }

        if (maior == menor && maior == menor)
        {
            cout << ("TRIANGULO EQUILATERO") << endl;
        }

        if (maior == menor && menor != meio && maior != meio)
        {
            cout << ("TRIANGULO ISOSCELES") << endl;
        }
    }
}
