"""
2022-03-28 23:40:26
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1568 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int sum=0;
		scanf("%d",&a);
		for(b=1;b<a;b++)
		{
			if(a%b==0)
			sum+=b;
		}
		if(sum==a)
		{
			printf("YES\n");
		}
		if(sum!=a)
		{
			printf("NO\n");
		}

	}
	return 0;
}