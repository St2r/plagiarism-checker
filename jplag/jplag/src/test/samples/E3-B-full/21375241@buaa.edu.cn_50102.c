"""
2022-03-26 20:00:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 3 ms | 1564 KB
Accepted | 1 * (60 / 100) | 13 ms | 1712 KB
ccepted | 1 * (30 / 100) | 11 ms | 1684 KB
Accepted | 1 * (9 / 100) | 5 ms | 1624 KB

"""

#include<stdio.h>

int main()
{
	int a,l,m,n,p;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%d",&a);
		p=0;
		if(a==1)
		p=1;
		for(l=1;l<a;l++)
		{
			if(a%l==0)
			p+=l;
		}

		if(p==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}