"""
2022-03-26 21:38:00
AC
1.0
Accepted | 1 * (5 / 100) | 5 ms | 1668 KB
Accepted | 1 * (35 / 100) | 14 ms | 1640 KB
Accepted | 1 * (60 / 100) | 8 ms | 1560 KB
 | 1 * (1 / 4) | 2 ms | 1604 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,sum,a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=0;
			for(j=1;j<a[i];j++)
			{
			if(a[i]%j==0)sum+=j;
			}
			if(sum==a[i])printf("YES\n");
			if(sum!=a[i])printf("NO\n");
	} 

return 0;
}