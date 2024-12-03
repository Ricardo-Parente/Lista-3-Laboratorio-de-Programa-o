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
        if (strcmp(v[k],c[k]) == 0)
        {
            puts("tem os mesmo caracteres");
        }
        
    }
    return 0;
}