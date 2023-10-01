#include<stdio.h>
int main(){
	char symbol = '*';
	int  rows ,k=0;
	printf("ROWS: \n");
	scanf("%d" , &rows);
	for(int i =1 ; i <rows+1 ; i++){
		
		for(int j =rows-i ; j>0 ; j--){
			printf(" ");
			}
			for(int k = 1 ; k < 2*i ; k = k+1 ){
				k<= i ? printf("%d",k+i-1) : printf("%d" , 3*i-k-1);
				}
				
			
		printf("\n");
		}
	return 0;
}
	
