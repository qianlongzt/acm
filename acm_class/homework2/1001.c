#include <stdio.h>

int main() {
	int num, sum;
	while(scanf("%d", &num) != EOF) {
		if(0 == num % 2) {
			sum = num / 2 * (num + 1);
		} else {
			sum = (num + 1) / 2 * num;
		}
		printf("%d\n\n", sum);
	}
	return 0; 
} 
