#include<stdio.h>
int sum(int,int);
main()
{
	int a,b,c;
	a=10,b=20;
	c=sum(a,b);
	printf("%d\n",c);
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
