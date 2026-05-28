#include <stdio.h>
int fibonacci(int n){
    if( n ==0 ){
        return 0;
    }
    else if( n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int terms ;
    printf("Enter the nth term: ");
    scanf("%d",&terms);


    printf("The Fibonacci number will be:%d",fibonacci(terms));
    return 0;
}