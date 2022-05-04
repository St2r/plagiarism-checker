"""
2022-03-29 00:35:17
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int xi,sum;
	while(scanf("%d",&xi)!=EOF)
	{   sum=1;
		for(int j=2;j<xi;j++)
		{   
			if(xi%j==0)
			{
			   sum=sum+j;
		    }
		}
	if(sum!=xi)
	printf("NO\n");
	else
	printf("YES\n");	
	}
	return 0;
}