#include<stdio.h>
#include"main.h"
int main(){
    S8 array[5]={0};
    for(S16 loop=0;loop<5;loop++){
        printf("enter a charcter %d: ",loop+1);
        scanf(" %c",&array[loop]);
    }
    convert(array);
}