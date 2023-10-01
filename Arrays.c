#include<stdio.h>
int main(){
    char numbers[4];
    int size;
    size = sizeof(numbers) / sizeof(char);
    // printf("%d" , size);
    for(int i = 0 ; i < size ; i++){
        printf("Enter %d element: " , i);
        scanf(" %c" , &numbers[i]);
    }
    for(int j = 0 ; j < size ; j++){
        printf(" %c " , numbers[j]);
    }
    printf("\n");
    return 0;
}