#include<stdio.h>
#include"../stdtype.h"
void take(S8 arr[],S16 size){
    S16 loop =0;
    for(loop=0;loop<size;loop++){
        printf("enter character %d: ",loop+1);
        scanf(" %c",&arr[loop]);
    }
}