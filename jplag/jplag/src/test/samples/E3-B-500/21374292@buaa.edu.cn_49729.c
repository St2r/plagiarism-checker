"""
2022-03-28 18:42:45
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1652 KB
Accepted | 1 * (35 / 100) | 3 ms | 1552 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
	int n,a[101],i,j,k,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		sum=0;
		for(k=1;k<=a[j]/2;k++)
		{
			if(a[j]%k==0)
			    sum=sum+k;}
			if(a[j]==sum)
			    printf("YES\n");
			else
			    printf("NO\n");	    
		
	}
	return 0;
 }