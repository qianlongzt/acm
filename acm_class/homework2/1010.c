#include <stdio.h>
#include <math.h>

int main() {
	int b;
	double a, sum;
	while(scanf("%lf%d", &a, &b) != EOF) {
		sum = 0;
		while(b --) {
			sum += a;
			a = sqrt(a);
			if(a < 1.00001) {
				sum += b;
				break;
			}
		}
		printf("%.2f\n", sum);
	}
	return 0; 
}
