"""
2022-03-26 12:56:40
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,x,ys,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		for(int j=1;j<x;j++){
			if(x%j==0){
				ys=j;
				sum+=ys;
			}
		}
		if(sum==x)
			printf("YES\n");
		else
			printf("NO\n");
		sum=0;
	}
	return 0;
}