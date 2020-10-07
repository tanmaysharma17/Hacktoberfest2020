//Sum of N natural numbers
#include<stdio.h>

//error in the below segment
//-------------
int sum(int n)
{
 return (n+1)*n/2;
}

int main()
{
 int r;
 scanf("%d",&r);
 int result=sum(r);
 printf("%d ",result);
 return 0;
}
