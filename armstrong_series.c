#include <stdio.h>
int armstrong(int num){
  int orignal = num;
  int wholenum = 0 ;
  int digits;

  while(num!=0){
   digits = num%10;
   wholenum+=digits*digits*digits ;
   num= num/10 ;
  }
  return( wholenum == orignal);
  }
  int main(){
    int terms ;
    printf("The number terms are: ");
    scanf("%d",&terms);

    printf("series will be like");
    for (int i=1 ; i<=terms ; i++){
        if(armstrong(i))
        printf("%d\n", i);
    }
    return 0;
  }

