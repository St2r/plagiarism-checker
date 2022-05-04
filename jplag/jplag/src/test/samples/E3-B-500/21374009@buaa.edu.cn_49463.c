"""
2022-03-27 15:15:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 3 ms | 1628 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int n,a[100],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int j=1;j<a[i];j++){
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