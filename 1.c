#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main(){
    float v[TAM],aux,menor,maior,resultado;
    
    
    for (int i = 0; i < TAM; i++)
    {
        puts("Vetor:");
        scanf("%f",&v[i]);
    }
    
    for (int k = 0; k < TAM - 1; k++)
    {
        for (int j = 0; j < TAM - k - 1; j++)
        {
            if (v[j] > v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
            
        }
        
    }
    
    for (int l = 0; l < TAM; l++)
    {
        printf("Vetor:%0.2lf\n",v[l]);
    }

    menor = v[0];
    maior = v[14];
    resultado = maior - menor;

    printf("Maior meos menor:%0.2f",resultado);
    
    return 0;
}