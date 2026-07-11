#include<stdio.h>
#include"main.h"
int counter = 0;

int main(){
    char name[15]={0};
    printf("enter your name:");
    scanf( "%s",&name);
    printf("your name is :%s\n",name);
    modifyString(name);
    printf("after modification:%s\n",name);
    
    printf("the vowel count is :%d",counter);
}