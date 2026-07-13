#include<stdio.h>
#include"main.h"
int main(){
    S16 array[5]={0},
    j=0;//the repeated
    for(S16 i=0;i<5;i++){
        printf("enter numbers (%d):",i+1);
        scanf(" %d",&array[i]);
    }
    repeated(array,&j);
    printf("(%d)is the repeated number.",j);
}