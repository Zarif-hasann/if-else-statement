#include<stdio.h>
int main () {
int a,b;
printf("Enter two students number:\n");
scanf("%d %d", &a,&b);
(a > b) ? printf("first Student is better \n") : printf("Second Student is better \n");
return 0;
}