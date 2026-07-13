#include<stdio.h>
#include"main.h"
int main(){
    S16 matrix[3][3]={0};
    S16 total=0,
    target=0;
    //*ptr[3][3];
    for(S16 counter=0;counter<3;counter++){
        for(S16 loop=0;loop<3;loop++){
            printf("enter numbers[%d][%d]: ",counter+1,loop+1);
            scanf(" %d",&matrix[counter][loop]);
        }
    }
    for(S16 counter=0;counter<3;counter++){
        for(S16 loop=0;loop<3;loop++){
            printf("%d ",matrix[counter][loop]);
        }
        printf("\n");
    }
    total=sumMainDiagonals(matrix);
    printf("your total: %d\n",total);
    printf("enter a number: ");
    scanf(" %d",&target);
    searchElement(&matrix[0][0],target);//search for number a user choose and then print its location 
}