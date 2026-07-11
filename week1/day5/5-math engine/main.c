#include<stdio.h>
#include"main.h"
int main(){
    int number=0,
    exponent=0;
    printf("enter number:");
    scanf(" %d",&number);
    printf("enter power:");
    scanf(" %d",&exponent);
    int POWERofNUM=power(number,exponent);
    printf("your number is:%d\n",POWERofNUM);
    int add=sumDigits(number);
    printf("the sum of th digits is: %d",add);
}