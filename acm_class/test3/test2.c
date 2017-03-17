#include <stdio.h>
#include <string.h>

char str[10000];
char str2[10];
int main() {
	int times, len, len2, i, j, sum, flag;
	scanf("%d", &times);
	getchar();
	while(times --) {
		gets(str);
		gets(str2);
		len = strlen(str);
		len2 = strlen(str2);
		sum = 0;
		for(i = 0; i <= len - len2; i++) {
			flag = 1; //ok
			for(j = 0; j < len2; j++) {
				if(str[i+j] != str2[j]) {
					flag = 0;
					break;
				}
			}
			if(flag) {
				sum += 1;
			}
		}
		printf("%d\n", sum);
		
	}
	return 0;
} 
