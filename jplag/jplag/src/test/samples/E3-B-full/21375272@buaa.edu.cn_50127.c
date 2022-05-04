"""
2022-03-29 16:17:53
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1636 KB

"""

#include <stdio.h>
int main()
{
	int n,i=0,j=1,a[105],yin;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	while(i<n)
	{
		j=1;
		yin=0;
	while(j<a[i])
    {
    	
			if(0==a[i]%j)
			{
			    yin=yin+j;
		    }
			j++;
	}
	if(yin==a[i])
	printf("YES\n");
	else
	printf("NO\n");
	i++;}
	return 0;
}