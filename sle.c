#include<stdio.h>
void main()
{
	int size,num[100],i,max,sm;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=1;i<size;i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}
	}
	for(i=0;i<size;i++)
	{
		if(max==num[i])
		{
			num[i]=0;
		}
	}
	sm=num[0];
	for(i=0;i<size;i++)
	{
		if(sm<num[i])
		{
			sm=num[i];
		}
	}
	
	printf("%d  %d\n",sm,max);
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
}
