#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//
//	int i;
//	for (i = 1;i <= 9;i++)
//	{
//		int j;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i, j;
//	for (i = 0;i < sz;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//	for (j = 0;j < sz;j++)
//	{
//		if (arr[j] > max)
//			max = arr[j];
//
//	}
//	printf("%d", max);
//		return 0;
//}
//int main()
//{
//	int i;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum +(1.0 / i) * flag;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
int main() 
{
	int i;
	int count = 0;
	for (i = 1;i <= 100;i++)
	{
		if (i % 10 == 9)
			count++;//���i=99 �����������������ô�����Ǹ�else if �Ͳ��ٽ�ȥ�����������ǲ��е�
		 if (i / 10 == 9)
			count++;
	}
	printf("%d", count);

	return 0;
}