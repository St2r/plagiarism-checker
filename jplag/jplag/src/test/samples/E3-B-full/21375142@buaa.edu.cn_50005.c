"""
2022-03-27 15:56:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1636 KB

"""

#include<stdio.h>
int n,i,j,x;
int main()
{
    int num=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		for(j=1;j<=x/2;j++)
		{
			if(x%j==0)
			num=num+j;
		}
		if(num==x)
		printf("YES\n");
		else
		printf("NO\n");	
		num=0; 
	}

	return 0;
}