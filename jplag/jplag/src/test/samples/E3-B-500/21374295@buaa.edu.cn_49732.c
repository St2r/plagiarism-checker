"""
2022-03-26 08:12:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 7 ms | 1536 KB
Accepted | 1 * (60 / 100) | 4 ms | 1536 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		int m,sum=0;
		scanf("%d",&m);
		for(int i=1;i<m;i++){
			if(m%i==0){
				sum+=i;
			}
		}
		if(sum==m){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}