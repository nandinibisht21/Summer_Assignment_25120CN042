#include <stdio.h>

int findMaxBubble(int arr[], int n) {
    // Just one pass of bubble sort is enough
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    return arr[n - 1]; 
}

int main() {
    int arr[100] ;
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    for(int i = 0; i < n; i++) {

    scanf("%d", &arr[i]);
    }
   printf("Maximum Number is: %d\n", findMaxBubble(arr, n));
    
return 0;
}