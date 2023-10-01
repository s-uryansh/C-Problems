#include<stdio.h>
int main(){
    int height;
    printf("Enter Height: \n");
    scanf("%d" , &height);
    char symbol;
    printf("Enter symbol: \n");
    scanf(" %c" , &symbol);
    for(int h =1 ; h <= height ; h++){
        for(int b =1 ; b <= h; b++){
            printf("%c" , symbol);
        }
        printf("\n");
}
}