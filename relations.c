#include<stdio.h>
int main()
{
int a,b;
printf("Enter the values a and b");
scanf("%d %d", &a,&b);
if(a<b)
{
printf(" a is lesser than b");
}
else
{
printf(" a is  greater than b"); 
}
if(a<=b)
{
printf(" a is lesser than or equal to b");
}
else 
{
printf(" a is greater than or equal to b");
}
if(a==b)
{
printf(" a is equal to b");
}
else
{
printf(" a is  not equal to b");
}
}
