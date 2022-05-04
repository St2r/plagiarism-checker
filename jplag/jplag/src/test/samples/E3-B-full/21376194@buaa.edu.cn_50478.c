"""
2022-03-26 21:42:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1692 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j=0,k,a[1000];
	int c,d,e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		d=0;
		for(c=1;c<=a[j]/2;c++)
	    {
		    
			if(a[j]%c==0)
		    {
			    d+=c;
		    }
		    else
		    {
			    continue;
		    }
		    
	    
	    }
	    if(d==a[j])
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