"""
2022-03-29 21:54:07
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int i=1,n,a;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&a);
		int j=1,sum=0;
		while(j<a){
			if(a%j==0){
				sum = sum + j;
			}
			j = j + 1;
		}
		if(sum==a){
		printf("YES\n");
	    }else{
		printf("NO\n");
	    }
		i = i + 1;
	}
}