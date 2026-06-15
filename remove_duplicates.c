#include <stdio.h>
int main() {
    
int arr[] = {1, 3, 2, 3, 5, 1, 4, 2, 5,78,66,78,55,100};
int n = sizeof(arr) / sizeof(arr[0]);
int unique[100], count = 0;

printf("Original array: ");
    
for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
printf("\n");

for (int i = 0; i < n; i++) {
    int found = 0;
        
    for (int j = 0; j < count; j++) {
        if (arr[i] == unique[j]) {
            found = 1;
            break;
        }
   }
if (!found)
    unique[count++] = arr[i];
 }

printf("After removing duplicates: ");
for (int i = 0; i < count; i++)
    printf("%d ", unique[i]);
printf("\n");

    return 0;
}