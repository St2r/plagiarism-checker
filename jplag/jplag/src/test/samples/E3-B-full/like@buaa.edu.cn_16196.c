"""
2022-03-29 11:14:07
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include <stdio.h>
#include <math.h>
 
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int x, ans=0;
		scanf("%d", &x);
		for (int j=1;j<x; j++){
			if (x%j == 0)
				ans += j;
		}
		if(ans == x)
			printf("YES\n");
		else
			printf("NO\n") ; 
	}
	return 0;
}