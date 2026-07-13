#include<stdio.h>
#include"../stdtype.h"
void Display(S8 *array,S16 size){
    S16 counter=0;
    for(counter=0;counter<size;counter++){
        printf("your charcter: %c\n",(array[counter]));
    }
}