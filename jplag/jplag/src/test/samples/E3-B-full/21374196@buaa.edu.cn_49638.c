"""
2022-03-27 00:13:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main() {
	int n,a,i=0,j=1,sum=0;
	scanf("%d", &n);
	for(;i<n;i++){
		scanf("%d", &a);
		for(j=1,sum=0;j<a;j++){
			if(a%j==0)
			sum+=j;
		}	
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
	}	
}