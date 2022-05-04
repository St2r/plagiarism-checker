"""
2022-03-28 21:24:34
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1572 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while (n--){
		int x,sum=0;
		scanf("%d",&x);
		for (int i=1;i<x;i++){
			if (x%i==0)
				sum+=i;
		}
		if (sum==x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}