"""
2022-03-28 21:39:42
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
    {
	scanf("%d",&x[i]);
	if(x[i]>1)
	{
		int m,sum=1;
		for(m=2;m<x[i];m++)
		{
			if(x[i]%m==0)
			sum=sum+m;
		}
		if(sum==x[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	}
	return 0;
    
	
    

}