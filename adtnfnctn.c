#include<stdio.h>
int riya(int x,int y)
{
int c;
c=x+y;
return(c);
}
int main()
{
int a,b;
printf("Enter the two numbers : ");
   scanf("%d %d", &a, &b);
int result=riya(a,b);
printf("result is %d\n",result);
   
}
