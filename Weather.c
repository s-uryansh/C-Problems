#include<stdio.h>

#define YEARS 5
#define MONTHS 12

int main(){
    float wthr[YEARS][MONTHS]= {
        {4.3 , 1.2 , 4.6 , 0.2 , 1.8 , 1.2 , 2.4 , 1.6 , 9.3 , 1.2 , 5.2 , 1.2},
        {4.1 , 1.2 , 4.4 , 1.2 , 1.2 , 0.2 , 2.4 , 1.4 , 1.3 , 1.2 , 3.2 , 1.2},
        {4.3 , 1.1 , 4.3 , 2.2 , 1.3 , 1.2 , 0.4 , 1.2 , 6.3 , 1.2 , 5.2 , 1.2},
        {4.4 , 1.3 , 4.2 , 3.2 , 1.0 , 1.2 , 1.4 , 1.8 , 2.0 , 1.2 , 1.2 , 1.2},
        {4.7 , 1.3 , 4.1 , 4.2 , 1.2 , 0.1 , 1.4 , 1.1 , 1.3 , 1.2 , 0.2 , 1.2},
     };

     float yrlavg , mnthavg;

     float subtotal =0 , total =0;

    printf("YEARS\t\t RAINFALLS\n");
    for(int i = 0 ; i<YEARS ; i++){
        for(int j = 0 ; j<MONTHS ; j++){

            subtotal += wthr[i][j];
        }
       
        printf("%d \t\t%0.2f \n" , 2010 + i , subtotal);
        total += subtotal;
        yrlavg = total/YEARS;
    }
        printf("Yearly Avg: %0.2f\n" , yrlavg);


    printf("\tMonthly AVG: \t\n");
    printf("\n Jan    Feb     Mar    Apr     May     Jun     Jul     Aug     Sep     Oct     Nov     Dec\n");
    subtotal =0;
    for(int a =0 ; a<MONTHS ; a++){
        for(int b=0 ; b<YEARS ; b++){
            
            subtotal += wthr[b][a];

        }
        printf("%0 .2f  " ,subtotal/YEARS);

        
    }
    printf("\n");

    
}