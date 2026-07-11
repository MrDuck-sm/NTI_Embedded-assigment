#include<stdio.h>
//flatted pointer is giving a number and then if ptr ==target i/3,i%3 
void searchElement(int *ptr,int target){
    int row=0,
    colume =0;
    for(int i=0;i<9;i++){
        if(*(ptr+i)==target){
            // row=i/3;
            // colume=i%3;
            printf("the location or index is : %d,%d",i/3,i%3);
        }
    }
}