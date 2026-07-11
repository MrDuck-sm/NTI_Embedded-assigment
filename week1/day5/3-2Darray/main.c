#include<stdio.h>
#include"main.h"
int main(){
    int matrix[3][3]={0};
    int total=0,
    target=0;
    //*ptr[3][3];
    for(int counter=0;counter<3;counter++){
        for(int loop=0;loop<3;loop++){
            printf("enter numbers[%d][%d]: ",counter+1,loop+1);
            scanf(" %d",&matrix[counter][loop]);
        }
    }
    for(int counter=0;counter<3;counter++){
        for(int loop=0;loop<3;loop++){
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