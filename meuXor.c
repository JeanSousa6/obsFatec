#include<stdio.h>


int xor (int a, int b);

int main(){

    printf("%d \n",xor(0,0));
    printf("%d \n",xor(0,1));
    printf("%d \n",xor(1,0));
    printf("%d \n",xor(1,1));

}

int xor(int a, int b){
    return (a && !b) || (!a && b);
}

