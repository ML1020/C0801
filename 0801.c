#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//模拟比赛打分
int main()
{
	int i, j = 1, n;
	float a[100], b[100], sum = 0;
	printf("\n输入选手数量:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("当前成员%d\n", i);
		printf("请输入分数:\n");
		for (; j < 5 * n + 1; j++)
		{
			scanf("%f", &a[j]);
			sum += a[j];
			if (j % 5 == 0)
			{
				break;
			}
		}
		b[i] = sum;
		sum = 0;
		j++;
	}
	j = 1;
	printf("选手    裁判1    裁判2    裁判3    裁判4    裁判5    总计\n");
	for (i = 1; i <= n; i++)
	{
		printf("选手 %d", i);
		for (; j < 5 * n + 1; j++)
		{
			printf("%8.1f", a[j]);
			if (j % 5 == 0)
			{
				break;
			}
		}
		printf("%8.1f\n", b[i]);
		j++;
	}
	system("pause");
	return 0;
}