"""
2022-03-26 22:05:52
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 9 ms | 1656 KB
Accepted | 1 * (60 / 100) | 10 ms | 1636 KB

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