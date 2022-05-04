"""
2022-03-27 23:20:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1540 KB
Accepted | 1 * (35 / 100) | 2 ms | 1532 KB
Accepted | 1 * (60 / 100) | 4 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
	int n,s,sum;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	
		scanf("%d",&s);
		sum=0;
		for(int m=1;m<s;m++)
		{
			if(s%m==0)
			{
				sum=sum+m;
			}
		 }
	      if(s==sum)
	      printf("YES\n");
	      else
	      printf("NO\n");
	}
	return 0;
 }