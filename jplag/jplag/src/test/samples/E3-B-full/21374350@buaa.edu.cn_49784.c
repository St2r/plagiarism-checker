"""
2022-03-26 11:43:10
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1584 KB
Accepted | 1 * (35 / 100) | 15 ms | 1616 KB
Accepted | 1 * (60 / 100) | 19 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n, a[100], b=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++,b=0)
	{
		scanf("%d",&a[i]);
		for(int j=1;j<a[i];j++)
		{
			if((a[i]%j)==0)
			b+=j;
		}
		if(b==a[i])
		a[i]=1;
		else
		a[i]=0;
	}
	for(int k=0;k<n;k++)
	{
		if(a[k]==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}