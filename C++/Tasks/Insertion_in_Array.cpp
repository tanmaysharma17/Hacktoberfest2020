#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
  int n,ar[1000];
  int k,i=1;
  int item;

  cout<<"Enter number of elements in the array:";
  cin>>n;


  while(i<=n)
  {
    cout<<i<<" element is: ";
    cin>>ar[i];
    i++;
  }


cout<<"Initially the array is:\n";

i=1;

while(i<=n)
{
  cout<<ar[i];
  i++;
}

//now
cout<<"Enter number to be inserted:\n";
cin>>item;

  cout<<"enter the position where item is to be inserted:";
  cin>>k;

i=n;

while(k<=i)
{
  ar[i+1]=ar[i];
  i--;
}

ar[k]=item;
n=n+1;

cout<<"Array after insertion:\n";
i=1;

while(i<=n)
{
  cout<<ar[i];
  i++;
}

getch();
return 0;
}
