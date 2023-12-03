#include<stdio.h>
#include<string.h>

void reverseString(){
    char regular[100];
    printf("Enter the string: ");
    scanf("%s" , regular);
    int length =strlen(regular);
    char reverse[length];
    // printf("%d" , length);
    for(int i=0 ; i<= length ; i++){
        reverse[i] = regular[length -i];
    }
    for(int j=0; j<=length; j++){
        printf("\n%c" , reverse[j]);
    }
    printf("\n");
}
void someFunctions(){
    char src[10];
    char str[20];
    char ar[] = {"HELLO "};

    printf("Length of string ar[] is: %ld" , strlen(ar));
    strncpy(src , ar , sizeof(src) -1);
    printf("\ncopied \n%s" , src);


    // To use strncpy():
    // strncpy( destination , source , sizeof(destination)-1
    char s[20]= {"I am suryansh rohil"};
    // printf("\nEnter the string: ");
    // scanf("%s" , s);
    strncpy(str , src , sizeof(str)-1);

    // printf("\n the string %s is concated with the string %s" , str , s);
    printf("\nThis is copied as well concated string: %s\n" ,  strcat(str , s)  );

}

int main(){

    
    reverseString();
}