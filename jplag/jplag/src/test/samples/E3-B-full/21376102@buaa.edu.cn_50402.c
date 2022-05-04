"""
2022-03-29 23:32:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		int m,sum = 0;
		scanf("%d",&m);
		for(j=1;j<m;j++) 
		{
			if(m%j==0) sum+=j;
		}
		if(sum==m) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}