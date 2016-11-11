#include <stdio.h>

int main() {
	unsigned int times, num, sum;
	scanf("%d", &times);
	while(times--) {
		scanf("%d", &num);
		int count = num;
		int max = 0, tmp;
		sum = 0;
		while(count--) {
			scanf("%d", &tmp);
			sum += tmp;
			if(tmp > max) {
				max = tmp;
			}
		}
		if(2 * max - 1> sum){
			printf("No\n");
		} else {
			printf("Yes\n");
		}
	}
	return 0; 
} 
