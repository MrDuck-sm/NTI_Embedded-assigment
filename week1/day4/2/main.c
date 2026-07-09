#include<stdio.h>
#include"main.h"
int main(){
    int array[4]={0};
    for(int counter=0;counter<4;counter++){
        printf("enter num [%d]: ",counter+1);
        scanf(" %d",&array[counter]);
    }
    up(array);
    down(array);
}
