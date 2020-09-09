#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,all=0;
	printf("please enter your number : ");
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			sum += 9 * pow(10, j);
			printf(" %d ", sum);
			all += sum;
		
			if (j != i)
			{
				printf(" + ");

			}
			else
			{
				printf(" =  %d", all);
			}
			
		}
		sum = 0;
		all = 0;
		printf("\n");
	}
}