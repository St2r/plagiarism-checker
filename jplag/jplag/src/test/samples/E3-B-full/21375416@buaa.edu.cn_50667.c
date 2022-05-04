"""
2022-03-28 20:29:25
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1668 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1584 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a[1010],c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int b=0;
		scanf("%d",&a[i]);
	    for(c=1;c<a[i];c++)
	    {
	        if(a[i]%c==0)
		    {
		    	b=b+c;
		    }
		}
		if(b==a[i])
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