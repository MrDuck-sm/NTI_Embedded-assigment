#include<stdio.h>
#include"header.h"
int main(){
    S8 array[5]={0},
    max=0;
    for(S16 i=0;i<5;i++){
        printf("enter charctre %d: ",i+1);
        scanf(" %c",&array[i]);
    }
    maxchar(array,&max);
    printf("your max value from your charcter is: %c",max);

}