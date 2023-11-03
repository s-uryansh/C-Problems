#include<stdio.h>
int main(){
    int u =3;
    int v;
    int * pv;
    int * pu;

    pu = &u;
    v = *pu;
    pv = &v;
    
    printf("\n u= %d &u = %p pu= %p *pu = %d \n" , u , &u , pu , *pu);
    printf("\n v= %d &v = %p pv = %p *pv = %d \n" , v , &v , pv , *pv);
}