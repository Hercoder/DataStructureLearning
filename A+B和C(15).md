## 问题描述
- 给定一个超级大的区间，从中取任意三个整数，如果A+B>C,则返回true 反之返回false

## 代码实现
```
版本一：
注意这里的a, b, c,三个值设置为long long型防止数值过大溢出
#include <stdio.h>

int main() {
	int total;
	int num = 1;

	scanf("%d", &total);
	while (total-- > 0){
		long long a;
		long long b;
		long long c;
		scanf("%lld %lld %lld", &a, &b, &c);
		if (a + b > c)
		{
			printf("Case #%d: true\n", num++);
		}
		else
		{
			printf("Case #%d: false\n", num++);
		}
	}
	
	return 0;
}

版本二：
注意：这里的数组声明中用了变量，在不同的编译环境下，可能会有错误

#include <stdio.h>

int main() {

	int num;
	scanf("%d", &num);
	//声明多大的数组
	long long arr[num][3];
	for (int i = 0; i < num; i++){
		scanf("%lld %lld %lld", &arr[i][0], &arr[i][1], &arr[i][2]);	
	}

	for (int i = 0; i < num; i++){
		if (arr[i][0] + arr[i][1] > arr[i][2]){
			printf("Case #%d: true\n", i+1);
		} else {
			printf("Case #%d: false\n", i+1);
		}
	}
	
	return 0;

}
```

## 总结
- 由于给定的数字区间非常大，因此在设置变量的类型时，应尽量大，防止数字溢出，此外，在读取数字时，占位符的设置也要考虑范围。

