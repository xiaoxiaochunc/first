#include<stdio.h>
int main()
{
	int fahr, lower, upper;
	double cloise;
	printf("���������ޣ�");
	scanf_s("%d", &lower);
	printf("���������ޣ�");
    scanf_s("%d", &upper);
	if (lower <= upper) {
		printf("���϶� ���϶�\n ");		for (fahr = lower;fahr <= upper; fahr++) {
			cloise = (5.0 / 9.0) * (fahr - 32);
			printf("4%d%6.1f\n", fahr, cloise);
		}
	}
	else {

		printf("�����˴�������ݣ���");
	}
	return 0;
}