#include <stdio.h>
int strongnum(int num){

int sum =0 , digit ;
int orignal ;

num = orignal ;

while (num>0){

    digit = num %10;

    int factorial=1;

for (int i=1 ; i<digit ;i++){
    factorial *= i ; 
}
sum += factorial;
num = num/10 ;

}
if (sum == orignal){
    return 1;
}
else{
    return 0;
}
}
int main(){
    int number;

    printf(" Enther the number to prove if its Strong Number or not: ");
    scanf("%d", &number);

   if(strongnum(number)){

    printf("Number is a Strong Number");
   }
   else{
    
    printf("Number is not a strong number");
   }

    return 0;
}