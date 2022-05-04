"""
2022-03-26 09:14:46
AC
1.0
Accepted | 1 * (1 / 4) | 4 ms | 1668 KB
Accepted | 1 * (1 / 4) | 6 ms | 1656 KB
Accepted | 1 * (1 / 4) | 6 ms | 1612 KB
Accepted | 1 * (1 / 4) | 9 ms | 1656 KB
B

"""

#include<stdio.h>
#include<math.h>
int main ()
{
	int n,m,i=1,a[1001];
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		scanf("%d",&m);
		int s=0;
		for(int j=1;j<=sqrt(m);j++)
		{
			if(m%j==0)
			{
				if(j*j==m) s+=j;
				else s+=j+m/j;
			}
		}
		if((s-m)==m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	
	return 0;
	
}