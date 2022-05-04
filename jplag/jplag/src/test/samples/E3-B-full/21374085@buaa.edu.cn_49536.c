"""
2022-03-26 14:40:50
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>

int main()
{
	int n,a[105],i,j;
	int sum=0,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		m=a[i];
		for(j=1;j<m;j++){
			if(m%j==0){
				sum+=j;
			}
		}
		if(sum==m){
			printf("YES\n");
		}
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}