"""
2022-03-29 20:42:53
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1776 KB
Accepted | 1 * (35 / 100) | 1 ms | 1620 KB
Accepted | 1 * (60 / 100) | 2 ms | 1696 KB

"""

#include <stdio.h>
int main()
{
	int m,n,i=0,j,sum=0;
	int a[10002]={0};
	scanf("%d",&m);
	
		for(j=0;j<m;j++){
		scanf("%d",&a[j]);
		for(n=1;n<a[j];n++){
			if(a[j]%n==0)
			sum=sum+n;
		    }
		if(sum==a[j])
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	    }
	
	return 0;
}