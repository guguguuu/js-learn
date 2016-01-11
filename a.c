#include<stdio.h>

int main()
{
	int count=0;
	int sum=0;
	int flag=1;
	int n=0;

	while(flag)
	{
	 scanf("%d",&n);
	if(n==0)	
	 break;
	 count++;
	 sum+=n;
	}
	printf("%d, %d",sum,sum/count);
}

