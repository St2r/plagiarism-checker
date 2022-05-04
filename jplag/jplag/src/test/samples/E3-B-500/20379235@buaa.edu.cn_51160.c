"""
2022-03-26 08:56:08
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 6 ms | 1612 KB
Accepted | 1 * (60 / 100) | 9 ms | 1532 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,A,B=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A);
		int a[A];
		for(j=1;j<A;j++) 
		{
			if(A%j==0)
			{
				B+=j;
			}
		}
		if(A==B)
		{
			printf("YES\n");
			B=0;
		}
		else
		{
			printf("NO\n");
			B=0;
		}
	}
	return 0;
}