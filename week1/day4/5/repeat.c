void repeat(char *array,char *c){
    for(int i=0;i<5;i++){
        if(array[i]==array[i+1]){
            *c=array[i];
        }
    }
}