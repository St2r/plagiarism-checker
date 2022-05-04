"""
2022-03-26 14:19:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1696 KB
Accepted | 1 * (35 / 100) | 2 ms | 1688 KB
Accepted | 1 * (60 / 100) | 6 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int num[1000],asn[1000];
	int cnt = 0;
	int sum=0;
	scanf("%d", &n);
	int i, j, k;
	k = 0;
	for (i = 0;i < n;i++) {
		scanf("%d", &num[i]);
		asn[i] = 0;
	}
	for (i = 0;i < n;i++) {
		for (j = 1;j < num[i];j++) {
			if (num[i] % j == 0) {
				sum += j;
			}
		}
		if (sum == num[i]){
			asn[i] = 1;
		}
		sum = 0;
	}
	for (i = 0;i < n;i++) {
		if (asn[i] == 1) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}