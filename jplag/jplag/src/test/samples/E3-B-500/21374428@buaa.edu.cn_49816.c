"""
2022-03-26 09:20:54
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1584 KB
Accepted | 1 * (35 / 100) | 2 ms | 1572 KB
Accepted | 1 * (60 / 100) | 17 ms | 1568 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,x,p,sum,sumx;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++){
		x=a[j];
		sum=0;
		for(p=1;p<=x;p++){
			if(x%p==0)
			sum=sum+p;
		}
		sumx=sum/2;
		if(sumx==a[j])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}