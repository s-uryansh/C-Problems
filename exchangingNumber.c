#include<stdio.h>
int main(){
	int a ,b ;
	a = 2 ;
	b = 3;

	// To do a = 3 , b = 2

	a = a + b; // a = 2 + 3 = 5
	b = a - b; // b = 5 - 3 = 2
	a = a - b; // a = 5 - 2 = 3
	printf("a: %d\nb: %d\n" , a , b);
	return 0;

}