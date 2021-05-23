#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,n,r;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]<a[i])
		{
			printf("%d",a[i+1]);
			break;
		}
	}
	
	getch();
}
