#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){
    char v[TAM];
    int a,aux;
    
    for (int i = 0; i < TAM; i++)
    {
        puts("Vetor:");
        scanf("%c",&v[i]);
    }
    
    for (int k = 0; k < TAM; k++)
    {
        int j = 0;
        a = v[j];
        aux = v[k];
        v[j] = aux;
        v[k] = a;
        j++;        
    }
    for (int k = 0; k < TAM; k++)
    {
        int j = 0;
        a = v[j];
        aux = v[k];
        v[j] = aux;
        v[k] = a;
        j++;        
    }
    for (int k = 0; k < TAM - 1; k++)
    {
        int j = 0;
        a = v[j];
        aux = v[k];
        v[j] = aux;
        v[k] = a;
        j++;        
    }
    
    
    for (int l = 0; l < TAM; l++)
    {
        printf("Vetor:%d\n",v[l]);
    }
    
    return 0;
}