#include<stdio.h>
#include<math.h>
int main(){

	float  arithmaticAvg , geomatricAvg=1;
	float num[] = {27.5 , 13.4 , 53.8 , 29.2 , 74.5 , 87.0 , 39.9 , 47.7 , 8.1 , 63.2};
	int size;
	size = sizeof num / sizeof num[0];
	for(int i = 0 ; i < size ; i++){
		arithmaticAvg += num[i];
		}
	arithmaticAvg = arithmaticAvg / size;
	printf("ArithmaticAvg: %.2f\n" , arithmaticAvg); 
	
	for(int j = 0 ; j < size ; j++){
		geomatricAvg = geomatricAvg * num[j];
		}
	geomatricAvg = pow(geomatricAvg , (1.0 / size) );
	printf("GeomatricAvg: %.2f\n" , geomatricAvg);
	
	if(arithmaticAvg > geomatricAvg){
		printf("Arithmatic Average is greater\n");
		}else{
			printf("Geomatric Average is greater\n");
			};
} 	
	 
