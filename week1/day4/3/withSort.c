void with_sort(int *array,int *max){
    int x=0;
    for(int i=0;i<5;i++){
     for(int j=0;j<4-i;j++){
        if(array[j]>array[j+1]){
            x=array[j];
            array[j]=array[j+1];
            array[j+1]=x ;
        }
      }
    }
    *max = array[4];
}