#include<stdio.h>
#include"../stdtype.h"
void down(S16 *array){
    for(S16 i =4;i>=0;i--){
        printf("down %d\n",array[i]);
    }
}