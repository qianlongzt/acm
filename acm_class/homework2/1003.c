#include <stdio.h>

int lcm(int a, int b) {
	int ta, tb, c, max, min;
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
	return a / max * b;
}
int main() {
	int times, tmp, num, i, sum;
	scanf("%d", &times);
	while(times--) {
		scanf("%d", &num);
		i = num;
		while(num--) {
			scanf("%d", &tmp);
			if(num == i - 1) {
				sum = lcm(tmp, 1);
			} else {
				sum = lcm(sum, tmp);
			}
		}
		printf("%d\n", sum);
	}
	return 0; 
} 
