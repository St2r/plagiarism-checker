"""
2022-03-27 21:42:57
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 3 ms | 1540 KB

"""

#include<stdio.h>
int main()
{
	int n,a[102],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
		for(int j=0;j<n;j++){
		for(int k=1;k<a[j];k++){
			if(a[j]%k==0){
				sum+=k;
			}
			}
		if(sum==a[j]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;
		}
	return 0;
}