#include"../stdtype.h"
void repeat(U8 *array,U8 *c){
    for(S16 i=0;i<5;i++){
        if(array[i]==array[i+1]){
            *c=array[i];
        }
    }
}