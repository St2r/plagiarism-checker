"""
2022-03-29 22:25:44
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1744 KB
Accepted | 1 * (35 / 100) | 1 ms | 1696 KB
Accepted | 1 * (60 / 100) | 3 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n,b[10005];
	int i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		int plus=0;
		for(k=1;k<b[i];k++)
		{
			if(b[i]%k==0)
			{
				plus+=k;
			}
		}
		if(plus==b[i])
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}