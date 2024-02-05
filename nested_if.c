#include<stdio.h>
int main () {
int a;
printf("enter any integer number:");
scanf("%d", &a);
if (a > 0)
   { if (a%2 == 0)
    printf("positive even");
    else printf("positive odd");}
if (a < 0)
    { if (a%2 == 1)
    printf("negative even");
    if(a%2 == 1)
    printf("negative odd");}
return 0;

}