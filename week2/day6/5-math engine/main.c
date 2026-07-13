#include<stdio.h>
#include"main.h"
int main(){
    S16 number=0,
    exponent=0;
    printf("enter number:");
    scanf(" %d",&number);
    printf("enter power:");
    scanf(" %d",&exponent);
    S16 POWERofNUM=power(number,exponent);
    printf("your number is:%d\n",POWERofNUM);
    S16 add=sumDigits(number);
    printf("the sum of th digits is: %d",add);
}