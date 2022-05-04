"""
2022-03-26 13:50:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
	int n, a[1010], b[10010], i, j, k, bSum;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		bSum = 0;
		for( j = 1; j < a[i]; j ++ ){
			if( ( a[i] % j ) == 0 ){
				bSum += j;
			}
		}
		if( bSum == a[i] ){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}