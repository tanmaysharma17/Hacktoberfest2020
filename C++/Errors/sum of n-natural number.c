//Sum of N natural numbers
#include<stdio.h>
int sum(int n){
 if(n==0){
   return 0;
 }
 return (n*(n+1))/2;
}

int main()
{
 int r;
 scanf("%d",&r);
 int result=sum(r);
 printf("%d ",result);
 return 0;
}
