#include<stdio.h>
int main()
{
	int fahr, lower, upper;
	double cloise;
	printf("请输入下限：");
	scanf_s("%d", &lower);
	printf("请输入上限：");
    scanf_s("%d", &upper);
	if (lower <= upper) {
		printf("华氏度 摄氏度\n ");		for (fahr = lower;fahr <= upper; fahr++) {
			cloise = (5.0 / 9.0) * (fahr - 32);
			printf("4%d%6.1f\n", fahr, cloise);
		}
	}
	else {

		printf("输入了错误的数据！！");
	}
	return 0;
}