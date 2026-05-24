#include <stdio.h>
int main(){
    int i, n, digits=0;
    printf("Enter n: ");
    scanf("%d",&n);

    while(n>0){
     n=n/10;
      digits ++;

    }
    printf("the digits are: %d",digits);
}
