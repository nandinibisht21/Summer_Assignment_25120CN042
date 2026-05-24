#include <stdio.h>
    int facto(int n){
    if(n==0||n==1){
        return 1;
    } 
        return n * facto(n-1);
}
    int main(){
     int n;
        printf(" the the number n");
    scanf("%d", &n);

    printf("Factorail is %d", facto(n));
}