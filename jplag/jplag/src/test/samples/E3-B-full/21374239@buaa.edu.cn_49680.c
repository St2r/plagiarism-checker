"""
2022-03-26 13:56:13
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1688 KB

"""

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		int sum=0; 
		for(int j=1;j<a[i];j++){
			if(a[i]%j==0){
				sum+=j;
			}
		}
		if(sum==a[i]){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}