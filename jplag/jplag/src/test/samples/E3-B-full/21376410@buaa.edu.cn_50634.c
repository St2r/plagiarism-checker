"""
2022-03-26 11:03:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1596 KB
Accepted | 1 * (35 / 100) | 7 ms | 1652 KB
Accepted | 1 * (60 / 100) | 8 ms | 1528 KB

"""

#include <stdio.h>
int main()
{
	int n,x[101],i,k,y[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		y[i]=0;
		for(k=1;k<=(x[i]/2);k++)
		{
			if((x[i]%k)==0)
		    y[i]+=k;
		}
		if(x[i]==y[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
    return 0;
 }