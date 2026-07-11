#include<stdio.h>
#include"main.h"
//adjecent num are number next to each other 
int main(){
    int array[5]={0};
    for(int i=0;i<5;i++){
        printf("enter number %d: ",i+1);
        scanf(" %d",&array[i]);
    }

    for(int i=0;i<5;i++){
      printf("before sorting and swaping %d\n",array[i]);
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(array[j]>array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
      printf("\nafter sorting and swaping %d",array[i]);
    }
}