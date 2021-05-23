#include<stdio.h>

void main()
{
	int a,*b; // b is a pointer (pointer to variable)
	b=&a;
	scanf("%d",b);
	printf("%d\n",a);
	getch();
}
	
