"""
2022-03-26 12:24:13
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 2080 KB
Accepted | 1 * (1 / 4) | 3 ms | 2056 KB
Accepted | 1 * (1 / 4) | 30 ms | 2492 KB
Accepted | 1 * (1 / 4) | 30 ms | 2428 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define eps 1e-15
int main()
{
	int n,f=1;
	double sum=1.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		f*=i;
		if(1.0/f<eps)
		{
			sum+=1.0/f;
		}
		else break;
	}
	printf("%.14f",sum);
   return 0;
}