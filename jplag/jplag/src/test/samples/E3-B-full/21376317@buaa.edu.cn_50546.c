"""
2022-03-26 08:45:16
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1556 KB
Accepted | 1 * (35 / 100) | 2 ms | 1480 KB
Accepted | 1 * (60 / 100) | 16 ms | 1524 KB

"""

#include<stdio.h>
#include<stdbool.h>
inline bool check(int x)
{
	int tmp=0,j;
	for(j=1;j<x;++j)
		if(!(x%j)) tmp+=j;
	if(tmp==x) return true;
	return false;
}
int n,x;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		if(check(x)) puts("YES");
		else puts("NO");
	}
	return 0;
}