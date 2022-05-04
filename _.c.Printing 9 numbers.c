#include<stdio.h>
int main()
{

//array with three rows and three columns

int a[3][3]={ {21,32,32},{34,54,56},{67,87,90} };
int i,j;
//each element array's value
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)

{

printf("a[%d][%d]=%d\n",i,j, a[i][j]);

}

}
return 0;





}

