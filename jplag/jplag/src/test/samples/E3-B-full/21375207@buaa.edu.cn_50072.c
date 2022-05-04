"""
2022-03-26 15:15:09
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 2040 KB
Accepted | 1 * (35 / 100) | 9 ms | 2092 KB
Accepted | 1 * (60 / 100) | 11 ms | 2096 KB

"""

#include <stdio.h>

int main()
{
	int n,sum=0,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<a[i];j++){
			if(a[i]%j==0){
				sum+=j;
			}
		}
		if(sum==a[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}