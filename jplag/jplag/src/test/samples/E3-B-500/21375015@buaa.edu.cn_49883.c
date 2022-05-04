"""
2022-03-26 19:33:45
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i,j,s,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		s=0;
		for(j=1;j<=a/2;j++)
		{
			if(a%j==0)
				s+=j;
		}
		if(s==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}