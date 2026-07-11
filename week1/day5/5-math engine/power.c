int power(int base,int exponent){
   //int num=1;//there is no pow(,)function in here so num will be the power in a loop
    if(exponent==0){
       return 1;
   }
   return power(base,exponent-1)*base;
}