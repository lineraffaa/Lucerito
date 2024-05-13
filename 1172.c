#include <stdio.h>
#define N 10
int main()
{
    int vetor[N], i = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (vetor[i] <= 0)
        {
            vetor[i] = 1;
        }
        printf("X[%d] = %d\n", i, vetor[i]);
        
    }
    
    
}