"""
2022-03-26 08:47:02
AC
1.0
Accepted | 1 * (1 / 4) | 12 ms | 1604 KB
Accepted | 1 * (1 / 4) | 9 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1600 KB
Accepted | 1 * (1 / 4) | 16 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
	int x;
	int n;
	int t=0,sum=0,r=0;
	int i;
	scanf("%d",&n);
	while(r<n) {
		scanf("%d",&x);
		int count[10]={0};
		for(i=1;i<x;i++) {
			if(x%i==0) {
				count[t++]=i;
			}
		}
		for(i=0;i<t;i++) {
			sum+=count[i];
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
		t=0;
		sum=0;
		r++;
	}
	return 0;
}