#include<stdio.h>

void main()
{
	int a,b,*p; // p is a pointer (pointer to variable)
	a=5;
	b=10;
	printf("%d\t%d\n",a,b);
	p=&a;	
	*p=15;
	printf("%d\t%d\n",a,b);
	p=&b;
	*p=20;
	printf("%d\t%d\n",a,b);
	getch();
}
	
