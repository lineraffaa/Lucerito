#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, B, C;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    while (A < 0 && B < 0 && C < 0)
    {
        B = B + C;
        if (A >= B)
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        B = pow(B, 2) + pow(C, 2);
        if (A == B)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        B = pow(B, 2) + pow(C, 2);
        if (pow(A, 2) > B)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }

        B = pow(B,2) + pow(C,2);

        if(pow(A,2) < B){

            printf(" TRIANGULO ACUTANGULO\n");
            
        }

        if (A == B && B == C && A == C)
        {
            printf("TRIANGULO EQUILATERO \n");

        }

        if (A == B && A == C || C == B && C == A || B == C && B == A)
        {
            printf("TRIANGULO ISOSCELES \n");
        }
        
        break;
    }
   
}