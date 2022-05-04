"""
2022-03-26 12:36:59
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2112 KB
Accepted | 1 * (35 / 100) | 9 ms | 1940 KB
Accepted | 1 * (60 / 100) | 9 ms | 2096 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int m,sum,n,i,a[1005],j,n1,b[1005];
	scanf("%d",&n); 
	for(j=1;j<=n;j++)
	{
		scanf("%d",&b[j]);
		sum=0;
		m=sqrt(b[j]);
		for(i=2;i<=m;i++)
		{
			if(b[j]%i==0)
			{
				sum+=i;
				sum+=b[j]/i;
			}
		}
		sum+=1;
		a[j]=sum;
		if(a[j]==b[j])printf("YES\n");
		else printf("NO\n");
	}
	
}