#include <stdio.h>
int main (){

 int sum=0 , digit , num ;
 printf(" Enter the Number:  ");
 scanf("%d", &num);

 while( num>0 ){

  digit = num % 10 ;
  sum = sum + digit;
  num= num/10;
 }
 printf(" SUM is : %d", sum);
return 0 ;
}