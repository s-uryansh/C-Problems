#include<stdio.h>
void quicksort(int x[100] ,int first , int last ){
    int pivot,temp ,i ,j;
    if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

int main(){
    int x[100],size ;
    printf("Enter the size of array: ");
    scanf("%d" , &size);
    for(int i=0; i<size; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d" , &x[i]);
    }
    quicksort(x,0,size-1);

    for(int a=0 ; a<size ; a++){
        printf("%d,", x[a]);
    }
    printf("\n");
}
