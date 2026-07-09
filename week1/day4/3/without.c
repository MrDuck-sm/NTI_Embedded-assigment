void without(int *array,int *max){
    for(int i=0;i<5;i++){
        *max=array[i]>array[i+1]?array[i]:array[i+1];
    }
}