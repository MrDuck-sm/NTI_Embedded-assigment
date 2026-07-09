void repeated(int *array,int *j){
    for(int i=0;i<5;i++){
        if(array[i]==array[i+1]){
            *j= array[i];
        }
    }
}