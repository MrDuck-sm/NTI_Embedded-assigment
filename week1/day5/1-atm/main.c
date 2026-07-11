#include<stdio.h>
#include<stdlib.h>
#include"main.h"
//solve the eeror
int main(){
    float balance=0;
    int type=0;
    char exit =0;
    do{
      
        printf("---------ATM---------\n");
        printf("press\n1-Withdraw\n2-Check balance\n3-Deposite\n4-exit \n:");
        scanf(" %d",&type);
      switch (type)
       {
       case 1:
       //withdraw
     processTransaction(&balance,type);
        break;
       case 2:
       //check balance
     processTransaction(&balance,type);
        break;
       case 3:
       //deposte
     processTransaction(&balance,type);
       break;
        case 4:
       processTransaction(&balance,type);
       //exit
       exit ='e';
       break;
       
       default:
       if(type>4){
       printf("Invaild Input");
       }
        break;
       }
      //system("cls");
    }while(exit != 'e');   
}