#include<stdio.h>

// 将字符B、C、J转为0，1，2
int changetoNum(char ch) {
	if (ch == 'B')
	{
		return 0;
	}

	if (ch == 'C')
	{
		return 1;
	}

	if (ch == 'J')
	{
		return 2;
	}
	
}

int main() {

	char mp[3] = {'B', 'C', 'J'};
	int N;
	scanf("%d", &N);
	
	// 记录甲，乙的胜平负次数
	int a_res[3] = { 0 };
	int b_res[3] = { 0 };
	
	// 记录甲乙二人胜时的手势次数
	int a_hand[3] = { 0 };
	int b_hand[3] = { 0 };

	int c1, c2;
	int k1, k2;

	for (int i = 0; i < N; i++)
	{
		getchar();
		scanf("%c %c", &c1, &c2);
		k1 = changetoNum(c1);
		k2 = changetoNum(c2);

		// 甲胜
		if ((k1 + 1) % 3 == k2)
		{
			a_res[0]++;
			b_res[2]++;
			a_hand[k1]++;
		// 甲乙平
		} else if (k1 == k2)
		{
			a_res[1]++;
			b_res[1]++;
		// 乙胜
		} else if ((k2 + 1) % 3 == k1)
		{
			a_res[2]++;
			b_res[0]++;
			b_hand[k2]++;
		}
	}
	
	printf("%d %d %d\n", a_res[0], a_res[1], a_res[2]);
	printf("%d %d %d\n", b_res[0], b_res[1], b_res[2]);

	int id1 = 0;
	int id2 = 0;
	for (int i = 1; i < 3; i++)
	{
		if (a_hand[i] > a_hand[id1])
		{
			id1 = i;
		}

		if (b_hand[i] > b_hand[id2])
		{
			id2 = i;
		}
	}

	printf("%c %c\n", mp[id1], mp[id2]);
	

	return 0;
}