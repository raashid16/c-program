#include<stdio.h>
void main()
{
int a,b,c;
printf(" ENter the values\n");
scanf("%d %d %d",&a,&b,&c);
if( a>b&&a>c)
printf("a\n");
else if(b>a &&b>c)
printf("b\n");
else
printf("c\n");
}
