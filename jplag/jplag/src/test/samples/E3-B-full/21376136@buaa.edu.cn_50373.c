"""
2022-03-26 08:05:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include<stdio.h>
int a[]={6,28,496,8128};
int main()
{
	int n,t,tt=0;
	scanf("%d",&n);
	while(scanf("%d",&t)!=EOF)
	{
		for(int i=0;i<=3;i++)
		{
			if(a[i]==t)
			{
				tt++;
				printf("YES\n");
			}
		}
		if(tt==0){
			printf("NO\n");
		}
		tt=0;
	}
}