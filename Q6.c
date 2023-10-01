#include<stdio.h>
int main(){
    int i , j , k;
    i = 8;
    j = 5;
    
    float x ,y ,z;
    x = 0.005;
    y = 0.01;
    
    char c , d;
    c = 'c';
    d = 'c';
    

    printf("(A) %d" , 2 *((i / 5) + (4 * (j-3)) % (i + j-2)));
    printf("\n(B) %f" , (i-3*j) % (c+2 *d) / (x - y));
    printf("\n(C) %d" , i++);
    printf("\n(D) %d" , ++i);
    printf("\n(E) %f" , ++x);
    printf("\n(F) %f" , y--);
    printf("\n(G) %d" , !(c == 99));
    printf("\n(H) %d" , 5* (i + j) > c);
    printf("\n(I) %d" , (x>y) && (i> 0) || (j<5) );
    printf("\n(J) %d" , (x>y) && (i> 0) && (j<5));
    printf("\n(K) %d" , k = (j == 5) ? i : j);
    printf("\n(L) %d" , k = (j > 5)? i: j);
    printf("\n(M) %f\n" , z = (x >= 0) ? x : 0);

}
