"""
2022-03-26 22:34:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 10 ms | 1548 KB
Error | 0 * (60 / 100) | 16 ms | 1560 KB

"""

#include<stdio.h>
int main()
{
	int i,a,n,k;
	int m;
	int sum=0;
	scanf("%d",&m);
	for(k=0;k<m;k++,sum=0)
	{
		scanf("%d",&n);
	    for(i=1;i<=(n/2);i++)
	  {
		if(n%i==0)
		a=i;
		else
		a=0;
		sum=sum+a;
	  }
	  if(sum==n)
	  printf("YES\n");
	  else
	  printf("NO\n");
	  
	}
	
	return 0;
}