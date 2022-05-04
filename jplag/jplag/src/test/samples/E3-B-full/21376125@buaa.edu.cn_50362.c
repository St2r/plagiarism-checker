"""
2022-03-27 22:11:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1684 KB
Accepted | 1 * (60 / 100) | 4 ms | 1620 KB

"""

#include <stdio.h>
int main()
{
	int sum,n,i,j,m;
	scanf("%d",&n);
	int a[n];
	sum=0;

    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(m=0;m<n;m++)
	{
			for(j=1;j<a[m];j++)
	    {
		    if (a[m]%j==0)
			sum=sum+j; 
			
	    }
	        if(a[m]==sum)
	          printf("YES\n");
	        else
	          printf("NO\n");
	sum=0;        
	}	
	return 0;
}