#include<stdio.h>

int transpose(int *matrix , int rows , int cols){
    int temp;
    
    for(int i = 0 ; i<rows ;i++ ){
        for(int j = i+1 ; j<cols;j++){
            temp = *(matrix+i*cols+j);
            *(matrix+i * cols + j) = *(matrix + j * cols +i);

            *(matrix+j * cols+i) = temp;
        }

        
    }

}

int displayMatrix(int *matrix , int rows , int cols){

    for(int i = 0 ; i<rows;i++){
        for(int j = 0; j<cols;j++){
            printf("\t %d \t" , *(matrix + i *cols + j));
        }
        printf("\n");
    }
}

int main(){

    int matrix[3][3];

    printf("Enter the elements for matrix: \n");

    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j<3;j++){
            scanf("%d" , &matrix[i][j]);
        }
    }

    printf("Before transpose: \n\n");
    displayMatrix((int*) matrix , 3 , 3);

    transpose((int*) matrix , 3 , 3);

    printf("After transpose: \n\n");
    displayMatrix((int*) matrix , 3 , 3);

    return 0;


}