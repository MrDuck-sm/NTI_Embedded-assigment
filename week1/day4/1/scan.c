#include<stdio.h>
void take(char arr[],int size){
    int loop =0;
    for(loop=0;loop<size;loop++){
        printf("enter character %d: ",loop+1);
        scanf(" %c",&arr[loop]);
    }
}