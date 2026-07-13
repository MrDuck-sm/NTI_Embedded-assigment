#include"../stdtype.h"
void with_sort(S16 *array,S16 *max){
    S16 x=0;
    for(S16 i=0;i<5;i++){
     for(S16 j=0;j<4-i;j++){
        if(array[j]>array[j+1]){
            x=array[j];
            array[j]=array[j+1];
            array[j+1]=x ;
        }
      }
    }
    *max = array[4];
}