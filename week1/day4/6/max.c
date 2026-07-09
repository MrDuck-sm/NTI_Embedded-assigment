void maxchar(char *array,char *max){
    for(int i=0;i<5;i++){
        if(array[i]>*max){
            *max=array[i];
        }
    }
}