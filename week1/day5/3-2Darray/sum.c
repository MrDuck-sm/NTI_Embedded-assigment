int sumMainDiagonals(int matrix[3][3]){
    int sum=0;
    for(int counter=0;counter<3;counter++){
        for(int loop=0;loop<3;loop++){
            if(counter==loop){
            sum =sum +matrix[counter][loop];\
            }
        }
    }
    return sum;
}