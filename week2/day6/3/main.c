#include<stdio.h>
#include"main.h"
int main(){
    S16 array[5]={0},
    max= 0;
    for(S16 i=0;i<5;i++){
        printf("enter num[%d]: ",i+1);
        scanf(" %d",&array[i]);
    }
 //with sorting
    with_sort(array,&max);
    printf("%d\n",max);
//  without sorting
    without(array,&max);    
    printf("%d\n",max);
    //printf("the last num i guess : %d\n",array[4]);
}