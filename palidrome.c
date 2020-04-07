#include<stdio.h>
int reverse(int num)//fun def
{
	int r,rev=0;
	while(num!=0)//123!=0,12!=0,1!=0
	{
		r=num%10;//r=3,2,1 ----->
		num=num/10;//num=12,1,0
		rev=rev*10+r;//3,32,321
	}
	return rev;
}
void main()
{
	int num,rev;
	scanf("%d",&num);//123

	rev=reverse(num);
	if(num==rev)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a Palindrome");
	}
	
}
