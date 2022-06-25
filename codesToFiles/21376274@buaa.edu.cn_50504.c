"""
2022-03-28 19:21:09
AC
1.0
Accepted | 1 * (1 / 10) | 9 ms | 1656 KB
Accepted | 1 * (1 / 10) | 11 ms | 1680 KB
Accepted | 1 * (2 / 10) | 14 ms | 1608 KB
Accepted | 1 * (2 / 10) | 12 ms | 1604 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,k=1;
	double JC=1,e=1.;
	scanf("%d",&n);
	if(n<=18)
	{
	for(i=0;i!=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			JC*=j;
		}
		k++;
		e+=(1.00000000000000/JC);
		JC=1;
	}
}
     else
    {
    	for(i=0;i!=18;i++)
	{
		for(j=1;j<=k;j++)
		{
			JC*=j;
		}
		k++;
		e+=(1.00000000000000/JC);
		JC=1;
	}
	
	}
	printf("%.14f",e);
	return 0;
}