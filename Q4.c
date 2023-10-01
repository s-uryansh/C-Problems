#include<stdio.h>
int main(){

	int a , b ,c;
	a = 8;
	b = 3;
	c = -5;
	
	int one , two , three , four;
	
	one = 2*b+3*(a-c);
	two = a % b;
	three = (a*c)%b;
	four = a*(c%b);
	
	printf("a = %d\n\n" , one);
	
	printf("b = %d\n\n" , two);
	
	printf("c = %d\n\n" , three);
	
	printf("d = %d\n\n" , four);
	
}
