"""
2022-03-26 15:39:13
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1720 KB
Accepted | 1 * (35 / 100) | 2 ms | 1720 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n, x[10006], i, j;
	scanf("%d",&n);
	for(i = 0;i<n; i++)
		scanf("%d",&x[i]);
	for(i = 0;i<n; i++)
	{
		int s=0;
		for(j =1;j<=x[i];j++)
		{
		    if(x[i]%j==0)
			s=s+j;
		}
		if(s==2*x[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
	
}