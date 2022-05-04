"""
2022-03-26 10:17:33
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1652 KB
Accepted | 1 * (35 / 100) | 18 ms | 1548 KB
Accepted | 1 * (60 / 100) | 20 ms | 1648 KB

"""

#include <stdio.h>

int main()
{
	int n, a[110], b,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<10001;j++)
		{
			if(a[i]%j==0 && a[i]!=j)
			{
				b+=j;
				//printf("%d\n",b);//TEST
			}
		}
		if(b==a[i])
			printf("YES\n");
		else
			printf("NO\n");
		b=0;
	}
}