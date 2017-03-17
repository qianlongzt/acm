#include <stdio.h>


int main() {
	int times, a, b, c, d;
	scanf("%d", &times);

	while(times --) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		printf("iphone 5%c\n", (float)a/b >= (float)c/d ? 'S':'C');
	}
	return 0;
} 
