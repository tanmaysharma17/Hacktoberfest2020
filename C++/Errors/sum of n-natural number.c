//Sum of N natural numbers
#include<stdio.h>
//error in the below segment
//-------------
int sum(int n)
{
 return (n+1)*n/2;
}
//-------------

int main()
{
 int r=sum(6);
 printf("%d ",r);
 return 0;
}
