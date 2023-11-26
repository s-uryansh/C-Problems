#include<stdio.h>
int main(){

    //Obtaining the file to copy from


    FILE *ptr = NULL;
    char filename[100] , ch;
    printf("Enter the filename to be copied from: ");
    scanf(" %s" , filename);
    ptr = fopen(filename , "r");

    //Creating new file to copy to 

    printf("Enter the file name to paste data to:  ");
    char pasteContent[100];
    scanf("%s"  ,pasteContent);
    FILE *ptr2 = NULL;
    ptr2 = fopen(pasteContent , "w");

    //Copying content

    while((ch=fgetc(ptr)) != EOF){
        fputc(ch,ptr2);
    }
    fclose(ptr);
    return 0;

}