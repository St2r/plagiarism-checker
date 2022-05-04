"""
2022-03-26 14:48:12
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2096 KB
Accepted | 1 * (35 / 100) | 8 ms | 2028 KB
Accepted | 1 * (60 / 100) | 8 ms | 2092 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i=0,b,c,d,m=1;
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	while(i<n)
	{
		
		b=2;
		m=1;
		while(b<=sqrt(a[i]))
		{
			if((a[i]%b)==0)
		{
			c=a[i]/b;
			m=m+b+c;
		}
		b++;
		}
		if(m==a[i])
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