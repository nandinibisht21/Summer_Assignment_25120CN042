#include <stdio.h>
int main() {
int n;
    
printf("Enter size of array: ");
scanf("%d", &n);
    
int arr[n];
    
printf("Enter %d elements: ", n);
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);
    
int largest = -9999, second = -9999;

for (int i = 0; i < n; i++)
{
if (arr[i] > largest) 
{
      second = largest;
      largest = arr[i];
} 
else if 
(arr[i] > second && arr[i] != largest) 
     {
        second = arr[i];
     }
}   
if (second == -9999)
printf("No second largest element exists\n");
else
printf("Second largest = %d\n", second);
    
return 0;
}