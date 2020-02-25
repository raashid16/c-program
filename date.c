#include<stdio.h>
int main()
{
int d,y,m,w;
printf(" Enter the value of d");
scanf("%d", &d);
y = d/365;
m = d/30;
w = d/7;
printf("y=%d,m=%d,w=%d",y,m,w);
}


