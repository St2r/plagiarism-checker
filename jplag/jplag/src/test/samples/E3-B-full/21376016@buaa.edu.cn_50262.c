"""
2022-03-27 13:18:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1600 KB
Accepted | 1 * (1 / 10) | 3 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1596 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1492 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		int num=0;
		for(j=1;j<=a/2;j++)
		{	
			if(a%j==0)
			{
				num+=j;
			}
		}
		if(num==a) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}