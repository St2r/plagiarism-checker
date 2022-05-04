"""
2022-03-27 21:56:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include<stdio.h>
int main()
{
	int n,x[101],i,j,m[101]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
		for(j=1;j<=x[i]/2;j++)
		{
			if(x[i]%j==0)
			{
				m[i]=m[i]+j;
			} 
		}
	    if(x[i]==m[i])
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;   
}