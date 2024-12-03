#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 3

int main(){
    int v[TAM],maritmedica,mgeometrica;
    
    for (int i = 0; i < TAM; i++)
    {
        v[i] = (rand() % 19);
        printf("numero gerado:%d\n",v[i]);
    }

    maritmedica = (v[0] + v[1] + v[2]) / 3;
    mgeometrica =pow ( v[0] * v[1] * v[2], 1/3);

    printf("media aritmedica:%d\n",maritmedica);
    printf("media geometrica:%d\n",mgeometrica); 

    return 0;
}