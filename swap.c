#include<stdio.h>
void main()
{
int a, b,temp;
printf(" Enter the value of a and b\n");
scanf(" %d%d",&a,&b);
printf(" Before swapping \n");
printf("a=%d b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swapping\n");
printf("a=%d b=%d\n",a,b);
}

