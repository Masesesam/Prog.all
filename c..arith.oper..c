/*a program to demonstrate the use of arithmetic operators*/
/*Samwel Masese*/
/*2-4-2022*/

#include<stdio.h>

int main()


{
int a=72;
int b=18;
int addition, subtraction, multiplication, division, modulus;


addition=a+b;//add 18 to 72
subtraction=a-b;//subtract 18 from 72
multiplication=a*b;//multiply 18 and 72
division=a/b;//divide 72 by 18
modulus=a % b;//calculate the remainder 


printf("addition of two numbers ,a+b %d\n");
printf("subtraction of two numbers ,a-b %d\n");
printf("multiplication of two numbers ,a*b %d\n");
printf("division of two numbers ,a/b %d\n");
printf("modulus of two numbers,a%b %d\n");
return 0;

}