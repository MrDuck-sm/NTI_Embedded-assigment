#include<stdio.h>
#include"../stdtype.h"
//flatted pointer is giving a number and then if ptr ==target i/3,i%3 
void searchElement(S16 *ptr,S16 target){
    S16 row=0,
    colume =0;
    for(S16 i=0;i<9;i++){
        if(*(ptr+i)==target){
            // row=i/3;
            // colume=i%3;
            printf("the location or index is : %d,%d",i/3,i%3);
        }
    }
}