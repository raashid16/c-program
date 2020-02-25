#include<stdio.h>
float main()
{
float a,b,c,h,A,P;
printf(" enter the sides of the triangle a,b,c and height h");
scanf(" %f %f %f %f ", &a,&b,&c,&h);
A= 0.5*b*h;
P= a+b+c;
printf(" The area of the triangle is %f",A);
printf(" The perimetre of the triangle is %f",P);
}

