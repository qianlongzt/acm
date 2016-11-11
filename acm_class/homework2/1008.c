#include <stdio.h>

int main() {
	unsigned int times, a, b, sum, loop;
	scanf("%d", &times);
	while(times--) {
		scanf("%d", &a);
		int i, sum[10] = {0};
		b = a;
		a %= 10;
		sum[0] = a;
		for(i = 1; i < 10; i++) {
			sum[i] = (sum[i - 1] * a) % 10;
			if(sum[i] == sum[0]) {
				loop = i;
				break;
			}
		}
		printf("%d\n", sum[(b-1) % loop]);
	}
	return 0; 
}
