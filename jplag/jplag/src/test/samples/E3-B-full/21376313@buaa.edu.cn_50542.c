"""
2022-03-26 09:11:19
AC
1.0
Accepted | 1 * (1 / 4) | 8 ms | 1648 KB
Accepted | 1 * (1 / 4) | 6 ms | 1664 KB
Accepted | 1 * (1 / 4) | 10 ms | 1724 KB
Accepted | 1 * (1 / 4) | 3 ms | 1696 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int x,ans=0,j;
		scanf("%d",&x);
		for(j=1;j<=sqrt(x);j++)
			if(x%j==0)
			{
				ans+=j;
				if(x!=j*j&&j!=1)ans+=x/j;
			} 
		if(ans==x)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}