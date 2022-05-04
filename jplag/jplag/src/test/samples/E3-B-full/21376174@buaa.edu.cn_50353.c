"""
2022-03-27 08:54:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 4 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	int n,a,b=0;
	scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{
		
	   scanf("%d",&a);
	   for(int i=1;i<a;i++)
	  {
		if(0==a%i)
	    b+=i;
	    else
	    b=b;
	  }
	if(a==b)
	printf("YES\n");
	else
	printf("NO\n");
	b=0;
    }
	return 0;
}