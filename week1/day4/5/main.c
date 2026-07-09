#include<stdio.h>
#include"main.h"
int main(){
    char array[5]={0},
    c=0;
    for(int i=0;i<5;i++){
        printf("enter charcter %d:",i+1);
        scanf(" %c",&array[i]);
    }
    repeat(array,&c);
    printf("your charcter is: %c",c);
}