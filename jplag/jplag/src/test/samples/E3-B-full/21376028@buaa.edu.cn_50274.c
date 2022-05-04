"""
2022-03-26 09:41:14
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1528 KB
Accepted | 1 * (35 / 100) | 2 ms | 1608 KB
Accepted | 1 * (60 / 100) | 16 ms | 1532 KB

"""

#include<stdio.h>
int main()
{
	int n,i,m,a,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&m);
		for(a=2;a<m;a++){
			if(m%a==0){
				sum+=a;
			}
		}
		if((sum+1)==m)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}