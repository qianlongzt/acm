#include <stdio.h>

int main() {
	int times, n, i;
	float sum[1000] = {1.0};
	for(i = 1; i < 1000; i++) {
		if(i % 2 == 0) {
			sum[i] =  sum[i - 1] + 1.0/(i + 1);
		} else {
			sum[i] =  sum[i - 1] - 1.0/(i + 1);
		}
	}
	scanf("%d", &times);
	while(times--) {
		scanf("%d", &n);
		printf("%.2f\n", sum[n-1]);
	}
	return 0; 
}
