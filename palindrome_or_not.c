#include <stdio.h>
int main(){

int digit , num, orignal , reverse=0;
printf("Enter the Number: ");
scanf("%d",&num);

orignal = num;

 while(num!=0){
    digit = num%10;
    reverse =reverse*10 + digit;
    num = num /10;
 }
    if(orignal == reverse){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not a palindrome");
    }

 return 0 ;


}