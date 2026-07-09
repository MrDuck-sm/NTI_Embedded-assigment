void with_sort(int *array,int *max){
    for(int i=0;i<5;i++){
        if(array[i]>*max){
            *max=array[i];
        }
    }
}