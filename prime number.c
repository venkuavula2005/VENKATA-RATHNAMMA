#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		count++;
	}
}
if(count==n)
printf("it is a prime number:");
else
printf("it is not a prime number:");
return 0;
}
