#include <stdio.h>
#include <math.h>

int main() {
	int count, a, b, i;
	scanf("%d", &count);
	for(i = 0; i < count; i++) {
		scanf("%d%d", &a, &b);
		if(a > b) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
} 
