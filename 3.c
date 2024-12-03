#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){
    char v[TAM];
    int c = 0, l = 0;

    for (int i = 0; i < TAM; i++)
    {
        puts("Escreva uma string:");
        scanf("%c",&v[i]);
     for(int j = 0; j < TAM; j++)
     {    
        if (v[j] == '\0')
        {
            c++;

        }
        
        else
        {
            l++;       
        }
     }
     
    }
     printf("Qtd de caracter na string:%d\n",c);

    return 0;
}