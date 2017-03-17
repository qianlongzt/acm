#include <stdio.h>
#include <string.h>
 
int dp[1001][1001];
int v[1001];
int c[1001];

int max(int a, int b) {
	return a > b ? a : b;
}
int main() {
	int T, N, V;
	int i, j;
	scanf("%d", &T);
	while(T--) {
		memset(dp, 0, sizeof(dp));
		memset(v, 0, sizeof(v));
		memset(c, 0, sizeof(c));
		
		scanf("%d%d", &N, &V);
		i = N;
		for(i = 1; i <= N; i++) {
			scanf("%d", &c[i]);
		}
		i = N;
		for(i = 1; i <= N; i++) {
			scanf("%d", &v[i]);
		}
		for(i = 1; i <= N; i++)  {
			for(j = 1; j <= V; j++) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-c[i]] + v[i]);
			}
		}
	/*	for(i = 0; i <= N; i++) {
			for(j = 0; j <= V; j++) {
				printf("%3d", dp[i][j]);
			}
			printf("\n");
		}
	*/
		printf("%d\n", dp[N][V]);
	}
	return 0;
} 
