#include<stdio.h>

int main() {

	const int CLK_TCK = 100;
	int c1; 
	int c2;
	scanf("%d %d", &c1, &c2);
	int result = c2 - c1;
	if (result % CLK_TCK >= 50)
	{
		result = result / CLK_TCK + 1;
	} else {
		result = result / CLK_TCK;
	}
	
	//计算出小时
	int h = result / (60 * 60);
	result = result % (60 * 60);
	//计算出分钟
	int m = result / 60;
	int s = result % 60;

	printf("%02d:%02d:%02d\n", h, m, s);

	return 0;
}