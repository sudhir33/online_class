#include<stdio.h>
void fibb(int range)
{
	int a=0,b=1,c,i;
	printf("%d %d ",a,b);
	for(i=1;i<=range-2;i++)
	{
		c=a+b;//1
		printf("%d ",c);//1
		a=b;
		b=c;
	}
}
void main()
{
	int range;
	scanf("%d",&range);
	fibb(range);
}
