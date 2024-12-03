#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main(){
    int v[TAM],gerador,aux;
    
    puts("escreva o intervalo dos numeros gerados");
    scanf("%d",&gerador);
    
    for (int i = 0; i < TAM; i++)
    {
        v[i] = (rand() % gerador);
        printf("Vetor:%d\n",v[i]);
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
        printf("Vetor:%d\n",v[l]);
    }
    
    return 0;
}