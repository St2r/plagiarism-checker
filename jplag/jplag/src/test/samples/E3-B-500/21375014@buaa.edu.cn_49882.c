"""
2022-03-27 12:14:41
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1584 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include <stdio.h>
int main()
{
    int n,shu,he;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		he=0;
		scanf("%d",&shu);
		for(int k=1;k<shu;k++)
		{
			if((shu%k)==0)
			{
				he+=k;
			}
		}
		if(he==shu)
		{
			printf("YES\n");
		}
		if(he!=shu)
		{
			printf("NO\n");
		}
	}
	
    return 0;
}