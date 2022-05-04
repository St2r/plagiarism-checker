"""
2022-03-26 08:57:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 3 ms | 1648 KB
Accepted | 1 * (60 / 100) | 15 ms | 1608 KB

"""

#include<stdio.h>

int main()
{
	int n,m,sum;
	sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		for(int j=1;j<m;j++){
			if(m%j==0){
				sum+=j;
			}
		}
		if(sum==m){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;
    }
	return 0;
}