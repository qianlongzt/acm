#include <stdio.h>
#include <math.h>

int main() {
	int count, a, i;
	scanf("%d", &count);
	for(i = 0; i < count; i++) {
		scanf("%d", &a);
		while( a % 2 == 0) {
			a /= 2;
		}
		while( a % 3 == 0) {
		 	a /= 3;
		}
		while( a % 5 == 0) {
			a /= 5;
		}
		while( a % 7 == 0) {
		 	a /= 7;
		}
		if(a < 7) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
} 
