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
        printf("%d" , stack[i]);
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
    printf("Stack size - %d\n A. Push | B. Pop | C. Display \n",stack_size);

    while(1){
        switch(c=getchar()){
          case 'A':
              if(overflow()){
                  printf("OVERFLOWING");
                  break;
              }
              pop();
              break;

          case 'B':
              if (underflow()){
              printf("UNDERFLOWING");
              break;
              }
              push();
              break;
          case 'C':
             display();
          case '\n' :
                break;

            default:
                printf("Invalid Input\n");
                break;

        
        }
    }

}
