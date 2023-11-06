#include<stdio.h>
#define ROWS 3
#define COLS 3
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

    int matrix[ROWS][COLS];

    printf("Enter the elements for matrix: \n");

    for(int i = 0; i < ROWS ; i++){
        for(int j = 0; j<COLS;j++){
            scanf("%d" , &matrix[i][j]);
        }
    }

    printf("Before transpose: \n\n");
    displayMatrix((int*) matrix , ROWS , COLS);

    transpose((int*) matrix , ROWS , COLS);

    printf("After transpose: \n\n");
    displayMatrix((int*) matrix , ROWS , COLS);

    return 0;


}