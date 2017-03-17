#include <stdio.h>


int main() {
	int times, max, min, num;
	while( -1 != scanf("%d", &times) && times != 0) {
		max = min = 0;
		while(times --) {
			scanf("%d", &num);
			if(max == 0 && min == 0) {
				max = min = num;
			}
			if(max < num) {
				max = num;
			}
			if(min > num) {
				min = num;
			}
		}
		printf("%d\n", 2 *(max -min));
	}
	
	return 0;
} 
