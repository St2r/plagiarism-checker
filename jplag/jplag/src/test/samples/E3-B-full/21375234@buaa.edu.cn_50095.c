"""
2022-03-26 11:30:14
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1656 KB
Accepted | 1 * (35 / 100) | 15 ms | 1652 KB
Accepted | 1 * (60 / 100) | 14 ms | 1648 KB

"""

#include <stdio.h>

int main()
{   
	int a[150], b[10000], c[10000], i, j, k, p=1, q, n, sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n;j++){
		for(k=1;k<a[j];k++){
			if(a[j]%k==0){
				sum+=k;
			}
		}
		if(sum==a[j]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		sum=0;
		
	}
	
	return 0;
}