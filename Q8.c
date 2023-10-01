#include<stdio.h>
int main(){

	float F[] = {0.06 , 0.08 , 0.08 , 0.10 , 0.10, 0.10 , 0.12 , 0.12 , 0.12 , 0.12};
	float X[] = { 27.5 , 13.4 , 53.8 , 29.2 , 74.5 , 87.0 , 39.9 , 47.7 , 8.1 , 63.2};
	int size = sizeof(F)/sizeof(F[0]);
	float average = 0;
	for(int i = 0; i < size ; i++){
		average += (F[i] * X[i]);
	}
	printf("%.2f\n" , average);
}
