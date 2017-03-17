#include <stdio.h>

 
unsigned long long N[41] = {0, 1, 1, 5, 9, 29};
unsigned long long New[41] =  {0, 1, 0, 4, 4, 20};

int main() {
	int i = 0;
	for(i = 6; i < 41; i++) {
		New[i] = 4 * (New[i - 2] + New[i - 3] + New[i - 4]);
		N[i] = New[i] + New[i - 1] + New[i -2] + New[i - 3] + New[i - 4];
	}
	
//	for(i = 0; i < 41; i++) {
//		printf("%d:::%llu\n", i , N[i]);
//	}
	
	int times, num;
	scanf("%d", &times);
	while(times --) {
		scanf("%d", &num);
		printf("%llu\n", N[num]);
	}
	return 0;
}

