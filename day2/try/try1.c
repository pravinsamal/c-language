#include<stdio.h>
#include<stdlib.h>

void sum (int x,int y) {
    int res =x+y;
    printf("addition =%d" , res);


}

int main (void ) {

    int a = 30,b=20;

    sum(a,b);
    return 0;
}