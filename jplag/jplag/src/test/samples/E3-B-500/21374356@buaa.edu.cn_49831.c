"""
2022-03-29 20:09:45
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int i,n,a,sum,j;
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		sum=1;
		scanf("%d\n",&a);
		for(j=2;j<a;j++){
			if(a%j==0)
			sum=sum+j;
		}
	   if(sum==a)
	   printf("YES\n");
	   else
	   printf("NO\n");
	}
	return 0;
}