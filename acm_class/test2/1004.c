#include <stdio.h>

int main() {
	int times, i;
	scanf("%d", &times);
	int a, b, c;
	i = times;
	while(i --) {
		scanf("%d%d%d", &a, &b, &c);
		if(a + b > c&& a+c > b && b+c>a && a-b<c&& a-c<b&&b-c<a) {
			if(a == b && b == c) {
				printf("Case #%d: equilateral\n", times - i);
			} else if(a == b || b == c|| a == c){
				printf("Case #%d: isosceles\n", times - i);
			} else {
				printf("Case #%d: scalene\n", times - i);
			}
		} else {
			printf("Case #%d: invalid!\n", times - i);
		}
	}

	
	return 0;
} 
