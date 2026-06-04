#include <stdio.h>
int main(){
    int n = 5;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){   // j<=i, not j<=5
            printf("%d ", j);
        }
        printf("\n");   // newline inside outer loop
    }
    return 0;
}