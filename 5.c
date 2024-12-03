#include <stdio.h>
#include <string.h>
#define TAM 3

int main(){
    char v[TAM], c[TAM];
    
    for (int i = 0; i < TAM; i++)
    {
        puts("Escreva a primeira string:");
        scanf("%c",&v[i]);
    }
    
    for (int j = 0; j < TAM; j++)
    {
        puts("Escreva a segunda string:");
        scanf("%c",&c[j]);
    }
    
    for (int k = 0; k < TAM; k++)
    {
        strcat(v[k],c[k]);
        printf("%c",v[k]);
    }
    
    return 0;
}