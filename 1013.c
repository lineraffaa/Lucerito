#include <stdio.h>
#include <stdlib.h>


int main()
{
    int valor1, valor2, valor3;
    int maior;

    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);

    maior = (valor1 + valor2 + abs(valor1 - valor2))/2;
    maior = (valor3 + maior +abs(valor3 - maior))/2;

    printf("%d eh o maior\n", maior);

    



    




}