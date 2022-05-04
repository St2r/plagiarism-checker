"""
2022-03-28 12:34:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1608 KB

"""

#include<stdio.h>
int a[10000],b[1000];


int main()
{
	int i,j,n,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=1,sum=0;j<a[i];j++){
			if(a[i]%j==0)
			sum=sum+j;
		}
		if(sum==a[i])
		printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}