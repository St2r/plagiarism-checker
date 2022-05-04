"""
2022-03-27 18:17:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 6 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
	int x[105],n,i=0,j=1,a[105]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&x[i]);}
	        for(i=0;i<n;i++)
	        {
	        for(j=1;j<x[i];j++)
	         {
			if(x[i]%j==0)
	        {
	        a[i]=a[i]+j;
			}				 
			}
}
  for(i=0;i<n;i++)
   {
   if(a[i]==x[i])
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	}
	return 0;
	
}