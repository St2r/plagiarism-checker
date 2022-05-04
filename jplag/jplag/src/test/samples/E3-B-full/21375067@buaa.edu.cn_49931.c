"""
2022-03-26 11:04:16
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1596 KB
Accepted | 1 * (2 / 10) | 3 ms | 1592 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1600 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,sum;
	int a[1005],b[5000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				sum+=j;
			}
		}
		if(sum==a[i])
		{printf("YES\n");}
		else{printf("NO\n");}
	}
	return 0;
}