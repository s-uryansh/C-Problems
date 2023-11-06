#include<stdio.h>

void swap( int * a, int *b) {

    int c = *a;
    *a = *b;
    *b = c;

}

int main(){
    int a , b;
    a = 9;
    b = 2;
    
    printf("Before swaping\na = %d  ,  b = %d \n", a ,b);\
    swap(&a , &b);
    printf("After swaping\na = %d  ,  b = %d \n", a ,b);



}