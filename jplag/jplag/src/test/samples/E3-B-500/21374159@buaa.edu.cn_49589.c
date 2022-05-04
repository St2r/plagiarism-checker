"""
2022-03-29 19:43:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include <stdio.h>
int main()
{
	int n,i,a,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=0;
		scanf("%d",&a);
		for(j=1;j<=a/2;j++)
		{
			if((a%j)==0)
			    s+=j;
		}
		if(a==s)
		    printf("YES\n");
		else
		    printf("NO\n");
	}
	return 0;
}