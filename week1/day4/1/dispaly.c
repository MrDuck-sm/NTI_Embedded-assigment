#include<stdio.h>
void Display(char *array,int size){
    int counter=0;
    for(counter=0;counter<size;counter++){
        printf("your charcter: %c\n",(array[counter]));
    }
}
