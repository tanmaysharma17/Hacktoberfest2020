//C program to read and print string, declaring memory of variables during run time.

#include<stdio.h>
#include<stdlib.h>

void main()
{
	char *name;
	int num;

	printf("Enter max length of name: ");
	scanf("%d",&num);

		name=(char*)malloc(num*sizeof(char));

	printf("Enter name: ");
	getchar();
	gets(name);

	printf("Hi! %s, How are you?\n",name);

	free(name);
	getch();
}
