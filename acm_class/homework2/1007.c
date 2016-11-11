#include <stdio.h>

int main() {
	int a, b, sum;
	while(scanf("%d%d", &a, &b) ) {
		if(0 == a && 0 == b) {
			return 0;
		}
		sum = a % 1000;
		while(--b) {
			sum *= a;
			sum %= 1000;
		}
		printf("%d\n", sum);
	}
	return 0; 
} 
