#include<stdio.h>
int main()							//���1000-3000�е�����
{
	int year;
	int count=0;
	for(year=1000;year<=3000;year+=4)
	{
		if((year%4==0&&year%100!=0)||(year%400==0))
		{
			printf("%d  ",year);
			count++;
		}
	}
	printf("\n%d\n",count);
	while(1);
	return 0;
}