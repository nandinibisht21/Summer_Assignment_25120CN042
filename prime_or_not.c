#include <stdio.h>
int main(){

  int num , isprime=1 , i;

  printf("Enther the number: ");
  scanf("%d",&num);

  for(i=2;i<num;i++){

   if(num%i==0){
    isprime=0;
    break;
   }
  }
 if(isprime){
  printf("Number is Prime");
 }
 else{
  printf("Not Prime");
 }
 return 0;
}