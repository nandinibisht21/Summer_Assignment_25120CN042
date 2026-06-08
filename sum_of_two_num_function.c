#include <stdio.h>
int sum(int num1, int num2){
    int sum;
  sum =  num1 +num2 ;
}
int main(){
    int a , b ;
    printf("Enter two num: ");
    scanf("%d%d",&a,&b);
    printf("Sum is : %d", sum(a,b));
    
}
