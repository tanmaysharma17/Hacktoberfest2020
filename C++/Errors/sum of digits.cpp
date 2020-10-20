#include <iostream>
using namespace std;
int main() {
 int n,sum=0;
 cout<<"Enter a number ";
 cin>>n;
 while(n) {
   digit = n%10;
   n/=10;
   sum=sum+digit;
 }
 
 cout<<sum << endl;
}
