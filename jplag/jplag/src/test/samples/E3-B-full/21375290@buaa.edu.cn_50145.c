"""
2022-03-26 09:11:35
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 3 ms | 1636 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
KB

"""

#include<stdio.h>
int main()
{
	int n,a=0,i,k,m;
	scanf("%d",&n);
	
	for(k=1;k<=n;k++)
	{
		scanf("%d",&m);
		for(i=1;i<=(m/2);i++)
		{
			if((m%i)==0)
			{
				a=a+i;
			}	
		}
		
		if(m==a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
		a=0;

	}


	return 0;
}