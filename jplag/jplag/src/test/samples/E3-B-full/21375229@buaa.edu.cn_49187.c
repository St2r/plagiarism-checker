"""
2022-03-26 23:55:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>

int main()
{
	int n,a,i,j,t=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			t+=j;
			else
			t=t;
		}
		if(t==a)
		printf("YES\n");
		else
		printf("NO\n");
		t=0;
	}
	return 0;
}