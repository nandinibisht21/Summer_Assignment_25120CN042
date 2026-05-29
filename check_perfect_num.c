#include <stdio.h>
int perfectnum(int num){
    int orignal, wholenum=0 ;
    orignal = num ;
     
    for(int i=1; i<orignal ;i++){
        if(num %i ==0){
            wholenum+=i;
        }
    }
        return ( wholenum==orignal );
    }
    int main(){
        int number;
        printf("The number is: ");
        scanf("%d",&number);

    if(perfectnum(number))
    printf("The number is Perfect");
    else
    printf("The number is NOT Perfect");
        
        return 0;
    }
