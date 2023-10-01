#include<stdio.h>
int main(){

	int num , n=1;
	printf("Enter Number: ");
	scanf("%d" , &num);
	for(int i = 2 ; i <= num ; i++){
		if( num % i == 0) {
			n++;
			}else{
			continue;
			};
			}
		if(n == 2){
			
			printf("PRIME!\n");
			}else{
				printf("NOT PRIME!\n");
				}
				
	
}
