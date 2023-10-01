#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    time_t t;
    int numberGuessed;
    // intilizing Random number generator
    srand((unsigned)time (&t));
    // Get the random number
    int randomNumber = rand() % 21;


    // do{    
    //     printf("%d" , randomNumber);
    //     if(tries > 5){
    //         printf("Sorry u failed\n");

    //         printf("Number was: %d\n" , randomNumber);

    //         break;
    //     };
    //     printf("Remaining Tries: %d", tries);

    //     printf("\nI have selected a random number.....\n");

    //     printf("Guess the number: \n");

    //     scanf("%d" , &numberGuessed);

    //     if(numberGuessed < randomNumber ){

    //         printf("Sorry number entered is lower than guessed.....\n");

    //       } else if(numberGuessed == randomNumber){

    //     printf("You have guessed the right number congratulation!!!\n");

    //      }
    //     else{
    //         printf("Sorry Number entered is higher than guessed.....\n");
    //     }
        
    //     tries++;

    // } while(numberGuessed != randomNumber);



    for(int tries = 5 ; tries < 0 ; tries--){
    printf("\n\n**** Guess the number ****\n\n");

        // printf("%d" , randomNumber);

    printf("Remaining try(ies): %d" , tries);

    printf("\nEnter The guessed number\n");

    scanf("%d" , &numberGuessed);

        if(numberGuessed == randomNumber){

            printf("CONGRATULATION!!!\n");
            break;
        };
        if(numberGuessed < randomNumber){

            printf("A bit higher!!\n");

        }else if(numberGuessed > randomNumber){

            printf("A bit lower!!\n");

        }
    }
    
    return 0;
}