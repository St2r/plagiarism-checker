"""
2022-03-27 21:12:20
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 3 ms | 1620 KB
Accepted | 1 * (1 / 4) | 3 ms | 1664 KB

"""

#include <stdio.h>
int main ()
{
	int n,i,m;
	int a;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for(m=1;m<=a;m++)
		{
			if(a%m==0){
				sum+=m;
			}
		}
		if(sum==a)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}