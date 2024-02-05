// using if else ladder showing a result
#include<stdio.h>
int main () {
double mark;
printf("Enter you mark:");
scanf("%lf", &mark);
if ( mark >= 80 )
{ 
    printf("Letter grade: A+ CGPA: 4 (A plus) ");
}
else if (mark >=75 )
{
    printf("Letter grade: A CGPA: 3.75 (A regular)");
}
else if ( mark >= 70 )
{  
    printf("Letter grade: A- CGPA: 3.50 (A minus)");
}
else if ( mark >= 65 )
{
    printf("Letter grade: B+ CGPA: 3.25 (B plus)");
}
else if ( mark >= 60)
{
    printf("Letter grade: B CGPA: 3.00 (B regular)");
}
else if ( mark >= 55 )
{
    printf("Letter grade: B- CGPA: 2.75 (B minus)");
}
else if ( mark >= 50 )
{
    printf("Letter grade: C+ CGPA: 2.50 (C regular)");
}
else if ( mark >= 45 )
{
    printf("Letter grade: C- CGPA: 2.25 (C minus)");
}
else if ( mark >= 40 )
{
    printf("Letter grade: D CGPA: 2.00 (D)");
}
else if ( mark < 40 )
{
    printf(" Fail");
}
 return 0;
}