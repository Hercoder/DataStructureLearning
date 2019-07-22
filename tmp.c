#include <stdio.h>

//初始化一个值为0的学校数组，其中数组下表为学校编号，值为学校得分
const int maxnum = 100001;
int schools[maxnum] = { 0 };

int main() {

	int schooltotal;

	//为参加的学校总数赋值，小于100000
	scanf("%d", &schooltotal);

	//记录每个学校的成绩
	for (int i = 0; i < schooltotal; i++) {
		int schoolId;
		int score;
		scanf("%d%d", &schoolId, &score);
		schools[schoolId] += score;
	}

	int maxScore = -1;
	int schoolnum = -10;
	for (int i = 0; i < maxnum; i++) {
		if (maxScore < schools[i]) {
			maxScore = schools[i];
			schoolnum = i;
		}
	}

	printf("%d %d\n", schoolnum, maxScore);

	return 0;

}
