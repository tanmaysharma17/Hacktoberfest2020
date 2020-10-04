//Program to find GCD

 
#include <iostream>
using namespace std;
int main()
{
int m,n;
 cout<<"Enter two no.s "<<endl;
 cin>>m>>n;
  //error in the below segment
//-------------
int ans;
if(m==0) ans = n;
else if(n==0) ans = m;
else
{
while(m!=n)
 {
 if(m>=n)
 m=m-n;
 else
 n=n-m;
 }
ans = m;
}
 cout<<"GCD is "<<ans;
 //-------------
return 0;
}

