"""
2022-03-27 21:27:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1544 KB

"""

#include <stdio.h>
int main() 
{	int a[100], n, i, j, k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	for(i=0;i<n;i++){
		k=0;
		for(j=1;j<=a[i]/2;j++){
			if(a[i]%j==0){
				k+=j;
			}
		}
		if(k==a[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}