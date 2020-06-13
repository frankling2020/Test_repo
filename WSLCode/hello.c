// test readability
//gcc myBest.c -o myBest.out -std=c11 -Wall -O3

#include <stdio.h>

int main(){
    int a, b;
    a=1; 
    b =2;
    int *p, *q, *t;
    p = &a;
    q = &b;
    if (*p>*q){
        t = p;
        p = q;
        q = t;
    }
    printf("%d < %d \n", *p, *q);
    int sum;
    int *s = &sum;
    *s= *p + *q;
    printf("%d\n",*s);
    return 0;
}