#include"../stdtype.h"
void repeated(S16 *array,S16 *j){
    for(S16 i=0;i<5;i++){
        if(array[i]==array[i+1]){
            *j= array[i];
        }
    }
}