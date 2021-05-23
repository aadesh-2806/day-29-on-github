#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,s,a[200];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	for(i=0; i<n; i=i+1)
	{       printf("enter value=");
		scanf("%d", &a[i]);
	}

			for(i=1;i<n;i=i+1)
			{
			    printf("%d  ", a[i])  ;

			}
			i=0;
		       printf("%d",a[i]);       //  left rotation by one place

	getch();


}
