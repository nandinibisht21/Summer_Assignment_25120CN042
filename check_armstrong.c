#include <stdio.h>
int main(){

  int digits , wholenum = 0 ,num,orignal ;
  printf("Enther the Number: ");
  scanf("%d",&num);
  
  orignal = num;

  while(num!=0){
   digits = num%10;
   wholenum+=digits*digits*digits ;
   num= num/10 ;
  }
   if(wholenum == orignal){
    printf("Number is Armstrong number");
  }
  else{
    printf("Number not armstrong Number");
  }

}