#include <stdio.h>
#include <math.h>

int main() {
	int a, b, sum, flag;
	double da, db, dsum;
	while(scanf("%d%d", &a, &b) ) {
		sum = 0;
		dsum = 0.0; 
		flag = 1;
		while(b --) {
			if(flag) {
				sum += a;
			} else {
				dsum += da;
			}
			da = sqrt(a);
			if(da == a) {
				flag = 1;
				a = da; 
			} else {
				flag = 0;
			}
		}
		printf("%.2f\n", sum + dsum);
	}
	return 0; 
}
