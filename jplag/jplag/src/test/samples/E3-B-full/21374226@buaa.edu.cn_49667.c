"""
2022-03-26 09:39:36
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1644 KB
Accepted | 1 * (35 / 100) | 9 ms | 1696 KB
Accepted | 1 * (60 / 100) | 13 ms | 1676 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,sum,a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=0;
		scanf("%d",&a);
		for(j=1;j<a;j++){
			if(a%j==0)sum+=j;
		}
		if(sum==a)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}