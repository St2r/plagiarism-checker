"""
2022-03-26 21:36:34
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1636 KB
Accepted | 1 * (35 / 100) | 8 ms | 1688 KB
Accepted | 1 * (60 / 100) | 10 ms | 1656 KB

"""

#include<stdio.h>

int main()
{
	int n,x,i,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=0;
		scanf("%d",&x);
		for(j=1;j<=x/2;j++){
			if((x%j)==0)
			sum+=j; 
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}