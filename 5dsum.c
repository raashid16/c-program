#include<stdio.h>
void main()
{
int a,b,c,d,e,n,s=0;
printf("Enter the number n\n");
scanf("%d",&n);
a=n%10;
n=n/10;
s=s+a;
b=n%10;
n=n/10;
s=s+b;
c=n%10;
n=n/10;
s=s+c;
d= n%10;
n=n/10;
s=s+d;
e=n%10;
n=n/10;
s=s+e;
printf(" Sum of the numbers=%d\n",s);
}


