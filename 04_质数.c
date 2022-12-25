#include<stdio.h>
#include<math.h>
int main()						//输出2--200中的质数
{								//1.试除法
	int a,i;
	int count=0;
	for(a=2;a<=200;a=a+1)		//当a初始值为奇数时，可另a+=2,因为偶数必为非质数
	{
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{break;}	
		}
		if(i>sqrt(a))
		{
			printf("%d ",a);
			count++;
		}
	}
	printf("\n%d\n",count);
	while(1);
	return 0;
}