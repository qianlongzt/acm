#include <stdio.h>

int main() {
	int i, times, cases, a, b, corridor[200] = {0}, max;
	int room[200][2] = {0};
	scanf("%d", &times);
	while (times --) {
		scanf("%d", &cases);
		for(i = 0; i < 200; i++) {
			corridor[i] = 0;
			room[i][1] = 0;
			room[i][0] = 0;
		}
		max = 0;
		
		int i = cases, k;
		while(i --) {
			scanf("%d%d", &a, &b);
			room[cases - i - 1][0] =  a;
			room[cases - i - 1][1] =  b;
			a = (a - 1) /2;
			b = (b - 1) /2;
			for(k = a; k <= b; k++) {
				corridor[k] += 1;
			}
		
		}
		for(i = 0; i< 200; i++ ){
			if(corridor[i] > max) {
				max = corridor[i];
			}
		}
		printf("%d\n", max * 10);
	}
} 
