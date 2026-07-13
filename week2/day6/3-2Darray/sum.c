#include"../stdtype.h"
S16 sumMainDiagonals(S16 matrix[3][3]){
    S16 sum=0;
    for(S16 counter=0;counter<3;counter++){
        for(S16 loop=0;loop<3;loop++){
            if(counter==loop){
            sum =sum +matrix[counter][loop];\
            }
        }
    }
    return sum;
}