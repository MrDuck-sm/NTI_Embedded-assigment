#include"../stdtype.h"
void maxchar(S8 *array,S8 *max){
    for(S16 i=0;i<5;i++){
        if(array[i]>*max){
            *max=array[i];
        }
    }
}