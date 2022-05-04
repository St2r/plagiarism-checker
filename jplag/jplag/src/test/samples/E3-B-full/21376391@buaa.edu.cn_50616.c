"""
2022-03-26 08:07:29
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 20 ms | 1588 KB

"""

#include<stdio.h>
int main()
{
	int n,i,s=0;
	scanf("%d",&n);
	while(n--)
	{
		int a;
		s=0;
		scanf("%d",&a);
		for(i=1;i<a;i++)
		{
			if(a%i==0) s+=i;
		}
		if(s==a) printf("YES\n");
		else printf("NO\n");
	}
}