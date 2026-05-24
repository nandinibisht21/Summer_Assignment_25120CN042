#include <stdio.h>
int main(){

    int n, i , multitable;
     printf("Enter the number: ");
     scanf("%d",&n);

     for(i=1 ; i <=10 ; i++){

        multitable = n*i  ;
        printf(" \n%d * %d= %d  ",n,i,multitable); 
     }
    }