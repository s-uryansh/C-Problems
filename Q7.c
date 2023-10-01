#include<stdio.h>
#include<math.h>
int main(){
    // x^2 - 7x + 10 = 0
    int a , b , c;
    a = 1;
    b = -7;
    c = 10;
    
    int d;
    d = b*b - (4 * a * c);
    
    if (d < 0){
    
    
     printf("No Real roots");
        
    }else{
    
        float root1 , root2;
        root1 = (-b + sqrt(d))/ (2*a);
        root2 = (-b - sqrt(d))/ (2*a);
    
    printf("Root1: %.2f , Root2: %.2f \n" , root1 , root2);
    
    }
    return 0;
}
