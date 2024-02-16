#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float quantia = 0, animal = 0, sapo = 0, rato = 0, coelho = 0, total = 0, cont = 0;
    float sapos = 0, coelhos = 0, ratos = 0;
    char tipo;

    cin >> quantia;
    for (int i = 0; i < quantia; i++)
    {
        cin >> animal >> tipo;
        total += animal;

        if (tipo == 'S')
        {
            sapo += animal;
        }

        if (tipo == 'R')
        {
            rato += animal;
        }

        if (tipo == 'C')
        {
            coelho += animal;
        }

        sapos = ((sapo / total) * 100);
        ratos = ((rato / total) * 100);
        coelhos = ((coelho / total) * 100);
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << coelhos << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << ratos << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << sapos << " %" << endl;
}