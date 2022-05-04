"""
2022-03-26 12:41:11
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 12 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,a,s=0,i;
	
	scanf("%d",&n);
	
	while(scanf("%d",&a)!=EOF)
	{
		for(i=1;i<a;i++)
		{
			if(a % i==0)
			
			s=i+s;
		}
		if(s==a)
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