#include <stdlib.h>
#define TAM 3

int main(){
    char v[TAM],caracter,a;

    puts("Escreva um caracter:");
    scanf("%c",&caracter);

    for (int i = 0; i < TAM; i++)
    {
        puts("Escreva uma string:");
        scanf("%c",&v[i]);
        
        if (v[i] == caracter)
        {
            puts("Caracter na string");
        }
        
        else
        {
            puts("Caracter nao esta na strig");
        }
    }
    
    return 0;
}