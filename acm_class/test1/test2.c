#include <stdio.h>
#include <math.h>

int main() {
	int count, a, b, i;
	scanf("%d", &count);
	for(i = 0; i < count; i++) {
		scanf("%d%d", &a, &b);
		a = a % 100;
		b = b % 100;
		printf("%d\n", (a + b) % 100);
	}
	return 0;
} 
