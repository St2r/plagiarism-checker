"""
2022-03-27 22:13:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include<stdio.h>
int main()
{
	int n,a,s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    for(int j=1;j<a;j++)
	    {
	    	if(a%j==0)
	    	    s+=j;
		}
		if(s==a)
		    printf("YES\n");
		else
		    printf("NO\n");
		s=0;
	}
	return 0;
}