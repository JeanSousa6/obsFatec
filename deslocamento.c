#include<stdio.h>
//exemplo de deslocamento de bits

void main (void){
    unsigned int i;
    int j;
    i = 1;
    //deslocamento com for

   for(j = 0; j<4; j++){
        i = i << 1;
        //o mesmo que multiplicar por 2

        printf("deslocamento a esquerda  %d: %d\n", j, i);

    }

    //a direita, div por 2
    for (j = 0 ; j <  4 ; j++){
        i = i >> 1;
        printf("deslocamento a direita %d: %d\n", j, i); 
    }

}
