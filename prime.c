#include<stdio.h>
void main()
{
int a,b,ch;

scanf("%d %d",&a,&b);
printf("1.add\n");
printf("2.sub\n");
printf("3.mul\n");
printf("4.div\n");
printf(" Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("%d",a+b);
break;
case 2:
printf("%d",a-b);
break;
case 3:
printf("%d",a*b);
break;
case 4:
printf("%d",a/b);
break;
default:
printf("try again");
}
}
