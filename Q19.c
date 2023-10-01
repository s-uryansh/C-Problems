#include<stdio.h>
    int main(){

    int i,r1,c1,r2,c2,j,k,l,sum,p,m,a,n;
    
    printf("No. of rows in first matrix:");
    scanf("%d",&r1);
    
    printf("No. of columns in first matrix:");
    scanf("%d",&c1);
    
    printf("No. of rows in second matrix:");
    scanf("%d",&r2);
    
    printf("No. of columns in second matrix:");
    scanf("%d",&c2);
    
    printf("Enter the elements in first matrix\n");
    
    int matrix1[r1][c1];
    int matrix2[r2][c2];
    int prdct[r1][c2];
    for(i=0;i<r1;i=i+1){
        for(j=0;j<c1;j=j+1){
            scanf("%d",&matrix1[i][j]);
         }
       printf("\n");
    }
   
    printf("Enter elements of second matrix\n");
    for(k=0;k<r2;k=k+1){
    
        for(l=0;l<c2;l=l+1){
            scanf(" %d",&matrix2[k][l]);}
          printf("\n");
    }
   
    sum=0;
   
    for(p=0;p<r1;p=p+1){
    
        for(n=0;n<c2;n=n+1){
            sum=0;
            for(m=0;m<c1;m=m+1){
    
                a=(matrix1[p][m]*matrix2[m][n]);
                sum=sum+a;
    }
   
    prdct[p][n]=sum;
   
    }
   
    }
   
    for(p=0;p<r1;p=p+1){
    
        for(n=0;n<c2;n=n+1){
         printf("%d\t",prdct[p][n]);}
         printf("\n");
    }
return 0;
}