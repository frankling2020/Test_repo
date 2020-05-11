#include <stdio.h>
int main(void) {
    char ch;
    float dog;
    int hel=113;
    printf("please enter a number:___\b\b\b");
    scanf("%c",&ch);
    printf("%c is %d",ch,hel);
    printf("Enter a number:\n");
    scanf("%f",&dog);
    printf("Hello, World!\n");
    printf("you have %.2f dog(s)",dog);
    printf("%e",3/5*22.0);
    return 0;
}