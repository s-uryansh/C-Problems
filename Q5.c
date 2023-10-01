#include<stdio.h>
int main(){

	float x , y, z;
	
	x = 8.8;
	y = 3.5;
	z = -5.2;
	
	float a , b , c , d;
	
	a = x /(y+z);
	b = 2 * y+3 * (x-z);
	c = 2 * x / (3 * y);
	int n =  x;
	int m =  y;
	d = n % m;
	
	printf("a = %f\n\n" , a);
	printf("b = %f\n\n" , b);
	printf("c = %f\n\n" , c);
	printf("d = %0.f\n\n" , d);

}
