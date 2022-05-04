"""
2022-03-28 22:02:30
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a,sum=0;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&a);
		for(i=a-1;i>=1;i--){
			if(a%i==0)
				sum+=i;
		}
		if(sum==a)
		printf("YES\n");
		else printf("NO\n");
		sum=0;
		n--;
	}
	return 0;
}