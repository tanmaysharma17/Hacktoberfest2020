//C program to find sum of array elements using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *flag;
	int num;
	int i, sum;

	printf("Enter number of elements of the array: ");
	scanf("%d",&num);

	flag=(int*)malloc(num*sizeof(int));

	for(i=0;i<num;i++)
	{
		printf("Enter element %d: ",i++);
		scanf("%d",(flag+i));
	}

	printf("\nEntered array elements are: \n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",*(flag+i));
	}

	sum=0;
	for(i=0;i<num;i++)
	{
		sum+=*(flag+i);
	}
	printf("Sum of array elements is: %d\n",sum);

	free(flag);

	return 0;
}
