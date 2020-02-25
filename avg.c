#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5, avg;
printf(" Enter the marks of all the subject");
scanf(" %d %d %d %d %d ", &s1,&s2,&s3,&s4,&s5);
avg = s1+s2+s3+s4+s5/5;
printf(" The average of the 5 subjects is %d ", avg);
} 
