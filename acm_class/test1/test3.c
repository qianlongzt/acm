#include <stdio.h>
#include <math.h>
int getWays(int n) {
	if(n == 1) {
		return 1;
	} else if(2 == n) {
		return 1;
	} else if(3 == n) {
		return 2;
	} 
	
	return getWays(n - 1) + getWays(n - 3);
} 

int main() {
	int count, a, i;
	scanf("%d", &count);
	for(i = 0; i < count; i++) {
		scanf("%d", &a);
		printf("%d\n", getWays(a));
	}
	return 0;
} 


