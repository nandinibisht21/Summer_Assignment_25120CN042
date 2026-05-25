#include <stdio.h>
int main(){

 int num, digit , reverse=0 ;
 printf("Enter the Number:  ");
 scanf("%d",&num);
while(n>0){
 digit = num %10 ;
 reverse = num *10 + digit ;
 num=num/10;
}
 printf(" Reverse is : %d" , reverse);

}