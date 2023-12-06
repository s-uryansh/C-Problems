#include<stdio.h>
#define stack_size 5
int stack[stack_size];
int top ;

void push(){
    
    printf("Enter integer to push > ");
    scanf("%d" , &stack[top++]);

}

void pop(){
    
    printf("Popped element %d\n" , stack[--top]);

}

void display(){
    printf("[");
    for(int i = 0 ; i < top ; i++){
        printf(" %dgit" , stack[i]);
    }
    printf("]\n");
}

int overflow(){
    return (top == stack_size);
}

int underflow(){

    return(top == 0);
}

int main(){
    char c;
    printf("Stack size - %d\n A. Push | B. Pop | C. Display | D. Exit\n",stack_size);

    while(1){
        switch(c=getchar()){
          case 'A':
              if(overflow()){
                  printf("OverFLOWING");
                  break;
              }
              push();
              break;

          case 'B':
              if (underflow()){
              printf("UnderFLOWING");
              break;
              }
              pop();
              break;
          case 'C':
             display();
             break;
          case 'D':
             goto exit_loop;
             break;
          case '\n' :
                break;

            default:
                printf("Invalid Input\n");
                break;

        
        }
    }
    exit_loop: 
        printf("\nExited\n");

}
