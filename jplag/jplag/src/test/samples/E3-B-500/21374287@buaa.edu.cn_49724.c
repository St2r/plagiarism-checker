"""
2022-03-27 13:30:43
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1488 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 15 ms | 1528 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j,k;
	int a[105];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		k=0;
		for(j=1;j<a[i];j++){
			if(a[i]%j==0){
				k+=j;
			}
		}
		if(a[i]==k){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}