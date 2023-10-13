#include<stdio.h>
#include<stdbool.h>
int main(){

    int p;

    bool isPrime;

    int prime[50] = {0};
    int primeIndex = 2;

    prime[0] = 2;
    prime[1] = 3;

    for(p = 5 ; p <= 100 ; p += 2){
        isPrime = true;

        for(int i = 1 ; isPrime && p / prime[i] >= prime[i]; ++i ){
            if(p % prime[i] == 0 ){
                isPrime = false;
            }
            if (isPrime == true){
            
                prime[primeIndex] = p;
                ++primeIndex;
                }
            
        }
    }
    for(int i =0 ; i < primeIndex ; i++){
        printf(" %d" , prime[i]);
    }
    printf("\n");
}