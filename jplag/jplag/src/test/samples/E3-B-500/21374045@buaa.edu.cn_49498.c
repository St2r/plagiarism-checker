"""
2022-03-27 10:28:20
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1640 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j,a[100],t;
	
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	while(i<n)
	{
		t=0;
		j=2;
		while(j*j<=a[i])
		{
			if(a[i]%j==0)
			{
				t+=(j+a[i]/j);
			}
			j++;
		}
		t++;
		if(t==a[i]) 
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		i++;
	}
	return 0;
}