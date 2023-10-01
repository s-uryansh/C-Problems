#include<stdio.h>
#define STEP 20
#define LOWER 0
#define UPPER 100
int main(){
	
	float cel;
	
	int farh;
	
	farh = LOWER;
	printf("Farhnhiet\t");
	printf("Celcius\n\n");
	
	while(farh <= UPPER){
	
		cel = (farh - 32) * 5/9;
	
		printf(" %d\t" , farh);
	
		printf("	%0.2f\n\n" , cel);
	
		farh += STEP;
	
		}
}
