"""
2022-03-26 17:02:16
AC
1.0
Accepted | 1 * (1 / 3) | 8 ms | 1632 KB
Accepted | 1 * (1 / 3) | 2 ms | 1660 KB
Accepted | 1 * (1 / 3) | 428 ms | 1656 KB


"""

#include <stdio.h>

int c[20];
int main()
{
	int i1,i2=0,n,a,b;

	scanf("%d",&n);
	
	while(i2<n)
	{
		scanf("%d",a);
		i1=1,b=0;
		if(a%2==0)
		{
			while(i1<n/2)
			{
				if(a%i1==0)
				{
					b=b+i1+a/i1;
				}
				i1++;
			}
		}
		if(a%2!=0)
		{
			while(i1<(n-1)/2)
			{
				if(a%i1==0)
				{
					b=b+i1+a/i1;
				}
				i1++;
			}
	    }
		if(b/2==a)
		c[i2]=1;
		else
		c[i2]=0;
		i2++;	
	}
	int i3=0;
	while(i3<n)
	{
		if(c[i3]==1)
		printf("YES\n");
		else
		printf("NO\n");
		i3++;
	}
	return 0;
}