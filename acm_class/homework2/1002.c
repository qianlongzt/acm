#include <stdio.h>

int main() {
	int times, last,num, sum;
	while(~scanf("%d", &times) && times != 0) {
		sum = 0;
		last = 0;
		while(times -- ) {
			scanf("%d", &num);
			if(num > last) {
				sum += (num - last) * 6 + 5;
			} else if(num < last) {
				sum += (last - num) * 4 + 5;
			} else {
				sum += 5;
			}
			last = num;
		}
		printf("%d\n", sum);
	}
	return 0; 
} 
