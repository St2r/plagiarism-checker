"""
2022-03-29 15:09:31
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 0 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include <stdio.h>
int main ()
{
	int n,x;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		int j,cont=0;
		for(j=1;j<=x/2;j++)
		{
			if(x%j==0) cont+=j;//%不能写成/ 
		}
		if(cont==x) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
 }