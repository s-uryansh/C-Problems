#include<stdio.h>
int main(){
	int num , i=1 , fact=1;
	
	printf("Enter the number: \n");
	scanf("%d" , &num);
	
	do{
	
		fact *= i;
		i++;
		}while(i !=num+1);
		
	printf("Factorial: %d\n", fact);

}	
