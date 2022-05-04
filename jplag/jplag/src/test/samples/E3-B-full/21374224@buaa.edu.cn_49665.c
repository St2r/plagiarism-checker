"""
2022-03-26 14:51:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	int n,x[101],i,sum=0,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x[i]);
		for(a=1,sum=0;a<x[i];a++){
			if(x[i]%a==0)
				sum=sum+a;
		}
		if(sum==x[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}