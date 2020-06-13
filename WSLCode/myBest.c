// test readability
//gcc myBest.c -o myBest.out -std=c11 -Wall -O3

#include <stdio.h>
#include <math.h>
#define COURSE "VG101"
#define NAME "Frank"

int main(){
    printf("Hello,world! \n");
    printf("Hello,%s \n",COURSE);
    printf("I am %s \n",NAME);
    printf("%s is always the best! First\n",NAME);

    return 0;
}