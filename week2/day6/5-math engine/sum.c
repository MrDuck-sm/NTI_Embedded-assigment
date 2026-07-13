#include"../stdtype.h"
S16 sumDigits(S16 n){//to use recursion i need base function like the if statment 
    if(n==0){
       return 0;
    }
    return (n%10)+sumDigits(n/10);
}
//and in return  to activate the recursion i must write the function name 