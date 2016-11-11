#include <stdio.h>

int main() {
	int a, b, c, ta, tb, sum, min, max;
	while(scanf("%d%d", &a, &b) != EOF) {
		ta = a;
		tb = b;
		do {
			c = ta % tb;
			if(0 == c) {
				max = tb;
			} else {
				ta = tb;
				tb = c;
			}
		} while(c != 0);
		printf("%d\n", a / max * b);
	}
	return 0; 
} 
