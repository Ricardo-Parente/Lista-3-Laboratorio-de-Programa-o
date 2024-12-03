#include <stdio.h>
#define Q 3

int main(){
    float m[Q][Q];
    
    for (int i = 0; i < Q; i++)
    {
        for (int j = 0; j < Q; j++)
        {
            puts("Escreva o vetor:");
            scanf("%f\t",&m[i][j]);
        }
        printf("\n");
    }
    
    for (int k = 0; k < Q; k++)
    {
        printf("Diagonal:%f\t",m[k][Q-1-k]);
    }

    return 0; 
}