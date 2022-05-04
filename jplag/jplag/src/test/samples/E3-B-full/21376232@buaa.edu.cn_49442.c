"""
2022-03-28 21:13:40
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1568 KB

"""

#include <stdio.h>
int hhh(int);
int main()
{
	int n,c[105];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&c[i]);
	for(int i=1;i<=n;i++){
		if(c[i]==hhh(c[i]))printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
int hhh(int x)
{
	int sum=0;
	for(int i=1;i<x;i++){
		if(x%i==0)sum=sum+i;
	}
	return sum;
}