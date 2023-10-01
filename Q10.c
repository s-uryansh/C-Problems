#include<stdio.h>
#include<math.h>
#define num 7
int main(){

	int x1,x2,x3;
	x1 = 0;
	x2 = 1;
	printf("1\n");
	for(int i =0; i < (num-1) ; i++){
		x3 = x2 + x1;
		printf("%d\n" , x3);
		x1 = x2;
		x2 = x3;
		};
	return 0;
}	
	
