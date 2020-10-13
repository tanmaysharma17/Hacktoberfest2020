//Sum of N natural numbers {1,2,3,.....}
#include<stdio.h>

int sum(int n){
 return (n*(n+1))/2;


int main()
{
 int r;
 scanf("%d",&r);
 int result=sum(r);
 printf("%d ",result);
 return 0;
}
