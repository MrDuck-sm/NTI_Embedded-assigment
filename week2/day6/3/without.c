#include"../stdtype.h"
void without(S16 *array,S16 *max){
    for(S16 i=0;i<5;i++){
        for(S16 i=0;i<5;i++){
        if(array[i]>*max){
            *max=array[i];
        }
    }
    }
}