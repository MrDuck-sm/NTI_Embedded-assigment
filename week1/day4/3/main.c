#include<stdio.h>
#include"main.h"
int main(){
    int array[5]={0},
    max= 0;
    for(int i=0;i<5;i++){
        printf("enter num[%d]: ",i+1);
        scanf(" %d",&array[i]);
    }

    with_sort(array,&max);
    printf("%d\n",max);
// i dont know how to make it without sorting
    without(array,&max);    
    printf("%d\n",max);
    
}