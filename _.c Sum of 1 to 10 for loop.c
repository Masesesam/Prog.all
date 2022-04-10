//sum of 1 to 10 for loop
//Samwel Masese
//8-4-2022


#include <stdio.h>
int main()
{
int  t, sum = 0;

printf("The first 10 natural number is :\n");
for (t = 1; t <= 10; t++)
{
sum = sum + t;
printf("%d ",t);    
}
printf("The Sum is : %d\n", sum);
}
