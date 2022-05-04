"""
2022-03-27 21:16:50
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1640 KB
Accepted | 1 * (35 / 100) | 11 ms | 1688 KB
Accepted | 1 * (60 / 100) | 13 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n,m,sum,i;
	scanf("%d",&n);
	while(n--)
	 {
	 	sum=0;
		scanf("%d",&m);
		for(i=1;i<=m-1;i++)
		{
			if(m%i==0)
			{
			sum=sum+i;
		}
		}
		if(sum==m)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}