"""
2022-03-28 16:36:08
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1696 KB
Accepted | 1 * (60 / 100) | 3 ms | 1592 KB

"""

#include<stdio.h>
int main()
{
	int n,i=0,j,b,a[105];
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
	    j=1;
	    b=0;
	while(j<=a[i]/2){
		if(a[i]%j==0)
		b=b+j;
		
		j++;
	}
		if(b==a[i])
		printf("YES\n");
		if(b!=a[i])
		printf("NO\n");
		
		i++;
	}
	return 0;
}