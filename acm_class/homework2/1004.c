#include <stdio.h>

int main() {
	int a, b, n;
	while(scanf("%d%d%d", &a, &b, &n) != EOF) {
		if(0 == a && 0 == b && 0 == n) {
			return 0;
		}
		int num[51] = {1, 1};
		int i, start = 0, loop = 0;
		a %= 7;
		b %= 7;
		
		for(i = 2; i < 51; i++) {
			num[i] = (a*num[i-1] + b*num[i-2]) % 7;
		}

		for(i = 2; i < 51; i++) {
			if(num[i] == num[0] && num[i + 1] == num[1]) {
				start = 1;
				loop = i;
				break;
			}
		}
		if(loop == 0) {
			for(i = 2; i < 51; i++) {
				if(num[i] == num[1] && num[i + 1] == num[2]){
					start = 2;
					loop = i - 1;
					break;
				}
			}
		}
		if(loop == 0) {
			start = 3;
			loop = 1;
		}
//		for(i = 0; i < 51; i++) {
//			printf("%d ", num[i]);
//		}
//		printf("\nstart %d loop %d\n", start, loop);
//		
		if(n < start) {
			printf("%d\n", num[n - 1]);
		} else {
			printf("%d\n", num[(n - start) % loop + start - 1]);
		}
	}
	return 0; 
}
