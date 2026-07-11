#include "main.h"
void modifyString(char *str){
    counter=0;
    while(*str != 0){
    if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'){
        counter++;
    }
    if(*str>=97 && *str<=122){
    *str=*str -32;//the difference betwwen upper an dlower case
    }
    *str++;
    }
    
}
//in ascii table the lower case start from 97 to 122 