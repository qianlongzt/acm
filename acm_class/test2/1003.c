#include <stdio.h>
int g[100][100] = {0};
int all[100];

int main() {
	int i, j, k, num = 0, tmp;
	while(scanf("%d", &num) == 1) {
		
		for(i = 0; i < num; i++) {
			for(j = 0; j < num; j++) {
				scanf("%d", &tmp);
				g[i][j] = tmp;
			}
		}
		
		for(i = 0; i < num; i++) {
			all[i] = -1;
		}
		all[0] = 0;
		
		int max = 0, count = 1, sum = 0, mer;
		
		for(count = 1; count < num; count++) {
			max = 0;
			for(i = 0; i < num; i++) {
				if(all[i] == -1) {
					continue;
				}
				
				for(j = 0; j < num; j++) {
					if(all[j] != -1) {
						continue;
					}
					
					if((max < g[i][j])) {
						max = g[i][j];
						mer = j;
					}
				}
			}
			all[mer] = mer;
			sum += max;
			//printf("%d %d %d\n", count, mer, sum);
		}
		printf("%d\n", sum);
	}
	return 0;
}

