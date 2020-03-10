#include<stdio.h>
void main()
{
int a,b,c;
printf(" Enter the sides of the triangle\n");
scanf("%d%d%d",&a,&b,&c);
if((a+b>c)||(a+c>b)||(b+c>a))
printf("Triangle is valid");
else 
printf("Triangle is not valid"); 
}
