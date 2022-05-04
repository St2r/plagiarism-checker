"""
2022-03-29 21:58:08
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1740 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	int a[101];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		int sum=1;
		for(j=2;j<a[i];j++){
			if(a[i]%j==0){
				sum=sum+j;
			}
		}
		if(sum==a[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}