#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Q 3
#define MX 10

int main(){
    int m[Q][Q];
    srand(time(NULL));
    for (int i = 0; i < Q; i++)
    {
        for (int j = 0; j < Q; j++)
        {
            m[i][j] = rand() % MX;
            printf("Numero gerado:%d\t",m[i][j]);
        }
        printf("\n");
    }
    unsigned n;
    puts("Entre com um numero:");
    scanf("%u",&n);
    unsigned qtd = 0;
    for (int i = 0; i < Q; i++)
    {
        for (int j = 0; j < Q; j++)
        {
            qtd += (m[i][j] == n)?1:0;
        }
        
    }
    printf("Qtd de ocorrencias de %u na matriz %u\n",qtd,n);
    return 0; 
}