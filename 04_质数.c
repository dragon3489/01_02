#include<stdio.h>
#include<math.h>
int main()						//���2--200�е�����
{								//1.�Գ���
	int a,i;
	int count=0;
	for(a=2;a<=200;a=a+1)		//��a��ʼֵΪ����ʱ������a+=2,��Ϊż����Ϊ������
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