#include<stdio.h>
int main () {
int a=1,b=2,c=0;
if (a||b) printf("\n %d", a,b);
if (!a) printf("\n %d", a);
if ( (++a)) printf("\n %d", a);
if ((--a)) printf("\n %d", a);
if (c) printf("\n %d", c);
return 0;

}