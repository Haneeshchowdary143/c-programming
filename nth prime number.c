#include<stdio.h>
int main()
{
	int num,primecount=0,i,flag,prime=1;
	printf("\n enter the number:");
	scanf("%d",&num);
	while(num!=primecount)
	{
		flag=0;
		prime++;
		for(i=2;i<=(prime/2);i++)
		{
			if(prime%i==0)
			flag=1;
		}
		if(flag==0)
		{
			primecount++;
		}
	}
	printf("%d prime number is : %d",num,prime);
	return 0;
	
}
