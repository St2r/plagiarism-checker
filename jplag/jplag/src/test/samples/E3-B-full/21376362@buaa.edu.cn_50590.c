"""
2022-03-26 17:15:56
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 3 ms | 1620 KB
Accepted | 1 * (60 / 100) | 4 ms | 1676 KB

"""

#include<stdio.h>
#include<math.h>

int main ()
{
	int m,n,p,o,i;
	scanf("%d",&o);
	for(i=0;i<o;i++) 
	{
	p=0;
	scanf("%d",&m);
	for(n=1;n<m;n++)
	{
		if(m%n==0)
		{
			p=p+n;	
		}
	}
	if(p==m)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	}
	return 0;
}