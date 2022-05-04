"""
2022-03-28 20:21:16
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
	int n,i,k,s;
	int a[100];
	scanf("%d",&n);
	i=0,s=0;
	while(i<n)
	{
		s=0;
		scanf("%d",&a[i]);
		for(k=1;k<=a[i];k++)
		{
			if(a[i]%k==0)
			{
				s=s+k+a[i]/k;
			}
			
		}
		s=s/2-a[i];
		if(s==a[i])
		printf("YES\n") ;
		else
		printf("NO\n");
		i++;
	}
	
	return 0;
}