"""
2022-03-29 14:53:10
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 0 ms | 1732 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h> 
int main()
{	
	int i,j,n;
	scanf("%d",&n);
	int o[n];
	int s=0;
	for(i=0;i<n;i++)
	scanf("%d",&o[i]);
	for(i=0;i<n;i++)
	{
		for (j=1;j<o[i];j++)
		{
			if(o[i]%j==0)
				 s=s+j;
		
		}
		if(s==o[i])
		{
			printf("YES\n");
			s=0;
		}
		else
		{
			printf("NO\n");
			s=0;
		}
	}
	return 0;
}