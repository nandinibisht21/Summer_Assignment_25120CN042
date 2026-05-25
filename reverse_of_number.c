#include <stdio.h>
int main(){

 int num, digit , reverse=0 ;
 printf("Enter the Number:  ");
 scanf("%d",&num);

 digit = num %10 ;
 reverse = num *10 + digit ;
 
 printf(" Reverse is : %d" , reverse);

}