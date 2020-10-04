// The program will take the input from user and store it in variable 'number' ,
// Then using a for loop it will find the sum of n natural numbers and prints it. 

#include<stdio.h>
int main(){
	int number, sum=0;
	printf("Enter the number:- \n");
	scanf("%d",&number);
	for(int i=1;i<=number;i++){
		sum=sum+i;
	}
	printf("The sum of %d natural numbers is equal to %d",number,sum);
	return 0;
}
