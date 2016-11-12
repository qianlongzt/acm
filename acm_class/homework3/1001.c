#include <stdio.h>

int main() {
	int i, money, times, tmp, room[1001][2] = {0};
	int sort[1001] = {0};
	int need, all;
	float price[1001] = {0.0};
	float maxPrice, buy;
	
	while(scanf("%d%d", &money, &times) != EOF) {
		if(money == -1 && times == -1) {
			return 0; 
		}
		for(i = 0; i< 1001; i++) {
			room[i][0] = 0;
			room[i][1] = 0;
			sort[i] = 0;
			price[i] = 0.0;
		}
		buy = 0.0;
		maxPrice = 0.0;
		tmp = times;
		while(tmp --) {
			scanf("%d%d", &all, &need);
			room[times - tmp - 1][0] = all;
			room[times - tmp - 1][1] = need;
			price[times - tmp - 1] = ((double)all) / need;
			if(price[times - tmp -1] > maxPrice) {
				maxPrice = price[times - tmp -1];
				sort[0] = times - tmp - 1;
			}
		}
		
		tmp = times;
		float lastMax;
		int count;
		lastMax = maxPrice;
		while(tmp --) {
			count = times;
			maxPrice = 0.0;
			while (count --) {
//				printf("maxPrice %f, lastMax %f, pricenow %f, %d\n", 
//					maxPrice, 
//					lastMax, 
//					price[times - count -1], 
//					(price[times - count -1] < lastMax && price[times - count -1] > maxPrice) 
//				);
				if(price[times - count -1] < lastMax && price[times - count -1] > maxPrice) {
					maxPrice = price[times - count -1];
					sort[times - tmp] = times - count - 1;
				}
			}
			lastMax = maxPrice;
		}
		
		
		tmp = times;
		int id;
		while(money>0 && tmp > 0) {
			id = sort[times - tmp];
			if(money >= room[id][1] ) {
				buy += room[id][0];
				money -= room[id][1];
			} else {
				buy += (money * price[id]);
				money = 0;
			}
			tmp --;
		}
		printf("%.3f\n", buy);
		
	}
	return 0;
}
