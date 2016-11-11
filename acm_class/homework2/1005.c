#include <stdio.h>

int main() {
	int num[] = {1, 2, 0, 2, 2, 1, 0, 1};
	int n;
	while(scanf("%d", &n) != EOF) {
		printf("%s\n", num[n%8] == 0 ? "yes":"no");
	}
	return 0; 
}
