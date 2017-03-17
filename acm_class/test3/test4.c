#include <stdio.h>
#include <string.h>

int way[1001][1001];
int set[1001];

int main() {
	int flag = 0;
	long int m, n;
	while(!scanf("%d%d", &n, &m) || m && n) {
		memset(way, 0, sizeof(way));
		memset(set, 0, sizeof(set));
		
		set[0] = 1;
		int i, a, b, c, j, k;
		for(i = 0; i < m; i++) {
			scanf("%d%d", &a ,&b);
			way[a][b] = 1;
		}

		for(i = 0; i < n - 1; i++) {
			for(j = 0; j <= n; j++) {
				if(set[j]) {
					for(k = 0; k <= n; k++) {
						if(way[j][k]) {
							set[k] = 1;
						}
					}
				} 
			}
		}

		c = 0;
		for(i = 0; i <= n; i++) {
			if(set[i] == 0) {
				c++;
			}
		}
		printf("%d\n", c);
		for(i = 0; i <= n; i++) {
			if(set[i] == 0) {
				printf("%d", i);
				if(i < n) {
					printf(" ");
				}
			}
		}
		printf("\n");
		
	}
	return 0;
} 
