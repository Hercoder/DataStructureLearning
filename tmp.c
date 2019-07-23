#include <stdio.h>

int main() {

	int num;
	scanf("%d", &num);
	//声明多大的数组
	int arr[num][3];
	for (int i = 0; i < num; i++){
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);	
	}

	for (int i = 0; i < num; i++){
		if (arr[i][0] + arr[i][1] > arr[i][2]){
			printf("Case #%d: true", i+1);
		} else {
			printf("Case #%d: false", i+1);
		}
		printf("\n");
	}
	
	
	
	return 0;

}
