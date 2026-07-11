#include<stdio.h>
//deposite entring money
//withdraw taking money
void processTransaction(float *balance,int type){
   static int storageDuration=0;
   float money=0;//the money entered
   if(type == 1){//withdraw taking money
        printf("enter the number you need to withdraw: \n");
        scanf(" %f",&money);
        if(money<= *balance && money>0){
        *balance=*balance-money;
        storageDuration++;
        }
   }
   else if(type==3){//deposite  is entring money
      printf("how many money do you want to deposte: ");
      scanf(" %f",&money);
      if(money>0){
         *balance=money;
         printf("your balnce have been upgraded to: %f\n",*balance);
         storageDuration++;
      }
   }
   else if(type==2){
      printf("your balance is : %f\n",*balance);
   }
   else if(type==4){
    printf("your number of tries are: %d\n",storageDuration);
    printf("----------ATM WORK IS DONE------------");
   }
}