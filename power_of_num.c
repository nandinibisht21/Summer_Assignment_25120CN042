#include <stdio.h>
int main(){

 int num , power , answer=1 ;
  printf(" Enter the Number: ");
  scanf("%d",&num);
  printf("Power will be: ");
  scanf("%d",&power);

  for(int i=0 ; i<power ; i++){

    answer *= num  ;
  }
  printf("The answer is : %d\n  ",answer);


}