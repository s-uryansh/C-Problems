#include<stdio.h>
int main(){
    float c , f;
    // printf("Enter your temp in Farhnite: ");
    // scanf("%d" , &f);
    int lower , step , upper;
    lower = 0;
    step = 20 ;
    upper = 60;
    f = lower;
    while(f <=upper){
    c = (5.0/9.0)*(f-32.0);
    f = f + step;
    printf("\nTemp in farhnite: %6.0f" , f);
    printf("\nTemp in Celcius: %6.1f\n" , c);
    }
    return 0;
}