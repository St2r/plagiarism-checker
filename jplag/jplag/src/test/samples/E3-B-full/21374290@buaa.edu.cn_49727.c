"""
2022-03-29 22:18:00
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 3 ms | 1736 KB

"""

#include <stdio.h>
int main(){
	int n,a[105],num;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int j=1;j<=n;j++){
		num=0;
		for (int k=1;k<a[j];k++){
			if (a[j]%k==0){
				num+=k;
			}
		}
		if (num==a[j]){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}