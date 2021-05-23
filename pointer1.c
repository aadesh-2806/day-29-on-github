#include<stdio.h>

void main()
{
	//unsigned int a;
	//int a;
	//signed int a;
	int a=5,*b; // b is a pointer (pointer to variable)
	b=&a;
	*b=7; // de-reference of b 
	
	// a = 7;
	//scanf("%d",&a);
	printf("%d\n",a);
	printf("%p\n",b);
	printf("%p\n",&a);
	printf("%p\n",&b);
	printf("%d\n",*b);
	getch();
}
	
