#include <stdio.h>
#include <string.h>

int main() {
	int const f[4] = {2, 3, 5, 7};
	long long int num, i, count, t[4];
	while(scanf("%lld", &num), num) {
		memset(t, 0, sizeof(t));
		count = 1;
		for(i = 0; i < 4; i++) {
			while(num % f[i] == 0) {
				t[i]++;
				num /= f[i];
			}
		}

		for(i = 0; i < 4; i++) {
			count *= t[i] + 1; 
		}
		printf("%lld\n", count);
	}
	return 0;
}
