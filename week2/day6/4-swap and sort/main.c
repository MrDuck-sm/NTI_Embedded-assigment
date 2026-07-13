#include<stdio.h>
#include"main.h"
//adjecent num are number next to each other 
int main(){
    S16 array[5]={0};
    for(S16 i=0;i<5;i++){
        printf("enter number %d: ",i+1);
        scanf(" %d",&array[i]);
    }

    for(S16 i=0;i<5;i++){
      printf("before sorting and swaping %d\n",array[i]);
    }

    for(S16 i=0;i<4;i++){
        for(S16 j=0;j<4-i;j++){
            if(array[j]>array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
    for(S16 i=0;i<5;i++){
      printf("\nafter sorting and swaping %d",array[i]);
    }
}