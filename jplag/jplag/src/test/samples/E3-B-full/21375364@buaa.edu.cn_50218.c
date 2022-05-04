"""
2022-03-26 13:31:40
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n,i,x,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=0;
		scanf("%d",&x);
		for(j=1;j<=(x/2)+1;j++){
			if(x%j==0)
				sum=sum+j;
			}
		if(sum==x)
			printf("YES\n");
		else
			printf("NO\n");
	}		
	return 0;
}