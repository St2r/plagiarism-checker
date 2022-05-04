"""
2022-03-27 22:41:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2072 KB
Accepted | 1 * (35 / 100) | 2 ms | 2108 KB
Accepted | 1 * (60 / 100) | 3 ms | 2016 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,i,sum;
	scanf("%d",&n);
	int a[n];
	for(i=0;i!=n;i++)
	{
		m=2;
		sum=1;
		scanf("%d",&a[i]);
		while(m<sqrt(a[i]))
		{
			if(a[i]%m==0)
			sum=sum+m+a[i]/m;
			m++;
		}
		if(m==sqrt(a[i]))
		{
		sum+=sqrt(a[i]);}
		if(a[i]==sum)
		{
		printf("YES\n");}
		else
		{
		printf("NO\n");}
	}
	return 0;
}