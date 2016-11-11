#include <stdio.h>

int main() {
	int a, b, n;
	while(scanf("%d%d%d", &a, &b, &n) != EOF) {
		if(0 == a && 0 == b && 0 == n) {
			return 0;
		}
		int num[50] = {1, 1};
		int i, start = 0, loop = 0;
		a %= 7;
		b %= 7;
		for(i = 2; i < 50; i++) {
			num[i] = (a*num[i-1] + b*num[i-2]) % 7;
		}
		for(i = 49; i >= 2; i--) {
			if(num[i - 2] == num[48] && num[i - 1] == num[49])  {
				loop = 50 - i;
				break;
			}
		}
		for(i = 0; i <= 48; i ++) {
			if(num[i] == num[48] && 0 == (48 - i) % loop) {
				start = i;
				break;
			}
		}
		for(i = 0; i < 50; i++) {
			printf("%d ", num[i]);
		}
		printf("\nstart %d loop %d\n", start, loop);
		if(n < start) {
			printf("%d\n", num[n - 1]);
		} else {
			printf("%d\n", num[(n - start) % loop + start - 1]);
		}
	}
	return 0; 
}
