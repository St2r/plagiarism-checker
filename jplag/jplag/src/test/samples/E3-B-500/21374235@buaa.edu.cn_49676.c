"""
2022-03-28 00:51:00
AC
1.0
Accepted | 1 * (5 / 100) | 5 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 5 ms | 1604 KB

"""

#include <stdio.h>
int main()
{
	int n,a[n],i,b;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(b=1;b<a[i];b++)
		{
			if(a[i]%b==0)
			sum=sum+b;
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n") ;
	}
		
	
	
	return 0;
}