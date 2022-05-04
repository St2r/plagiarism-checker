"""
2022-03-27 21:10:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	int n,x[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	  scanf("%d",&x[i]);
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			  k+=j;
    	}
			if(k==x[i])
			  printf("YES\n");
			else
			  printf("NO\n");
	}
	return 0;
}