"""
2022-03-30 15:15:25
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
#define eps 5e-15 
int main()
{
	int i,n;
	scanf("%d",&n);
 	double e=1.0,t=1.0;
	for(i=1;i<=n;i++)
	{
		if((1.0/t)<eps)
		break;
		else
 		{
 			t*=i;
 			e+=1.0/t;
		}


 	}
 	printf("%.14lf\n",e);
 	return 0;
}