#include<stdio.h>
int perfect(int num)//fun def
{
	//write ur code here
	int n=1;//num=123,n=1
	while(1)
	{
		if(n*n==num)
		{
			return 1;
		}
		else if(n*n>num)
		{
			return 0;
		}
		n++;//2,3,....11,12
	}	
}
void main()
{
	int num,res;
	scanf("%d",&num);
	res=perfect(num);//1 0r 0 fun call
	if(res==1)
	{
		printf("perfect Square");
	}
	else
	{
		printf("Not a Perfect Square");
	}
	
}
