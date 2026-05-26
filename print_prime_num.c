#include <stdio.h>
int main() {
int start, end, i, j, isprime;

printf("Enter range: ");
scanf("%d%d", &start, &end);

for(i = start; i <= end; i++) {

isprime = 1;

if(i <= 1) {

    isprime = 0;

}
for(j = 2; j * j <= i; j++) {

if(i % j == 0) {
 isprime = 0;
break;

}
}

if(isprime) {
            
printf("%d ", i);

 }
 }
return 0;
}