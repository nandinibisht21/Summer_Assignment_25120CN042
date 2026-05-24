#include <stdio.h>
int main(){

    int n , i , sum=0;
    printf(" Enter the Natural No. n : ");
    scanf("%d",&n);

    for(i=1; i<=n ; i++){

         sum +=i ;

    }

    printf("the sum of n terms is: %d", sum);

    return 0 ;

}