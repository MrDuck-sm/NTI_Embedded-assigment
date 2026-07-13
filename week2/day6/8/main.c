//to swap i need 'i' ,arr[i] and arr[i+1]
#include<stdio.h>
#include"main.h"
int main(){
    S16 int_array[5]={0};
    S8 char_array[5]={0};
    for(S16 i=0;i<5;i++){
        printf("enter number %d: ",i+1);
        scanf(" %d",&int_array[i]);
    }
    for(S16 i=0;i<5;i++){
        printf("enter charcter %d: ",i+1);
        scanf(" %c",&char_array[i]);
    }
    swapCHAR(char_array);
    
    swapINT(int_array);
    //something weird happen when printing the first swaped value but the rest work fine
    

}