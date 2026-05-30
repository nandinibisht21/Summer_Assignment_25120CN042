#include <stdio.h>

int main(){
    int num, i, largest = 0;
    
printf("Enter the Number: ");
scanf("%d", &num);
    
for(i = 2; i <= num; i++){
if(num % i == 0){    
 int prime = 1, j;
 for(j = 2; j < i; j++){
    if(i % j == 0){
  prime = 0;
                    break;
                }
            }
  if(prime == 1)
  largest = i;  
 }
    }
    printf("Largest Prime Factor: %d\n", largest);
    return 0;
}