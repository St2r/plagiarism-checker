"""
2022-03-29 22:47:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,x;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		int s=0;
		for(i=1;i<x;i++)
			if(x%i==0) s+=i;
		if(s==x) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}