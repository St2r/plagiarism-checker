"""
2022-03-26 20:09:01
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1596 KB
Accepted | 1 * (60 / 100) | 4 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,m,s=0,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		t=1;
                s=0;
		for(m=x-1;m>0;m--)
		{
			if(x%m==0)
			{
				s=s+m;		
			}
		}
		if(x==s) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}