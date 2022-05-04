"""
2022-03-26 12:12:58
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1584 KB
Accepted | 1 * (35 / 100) | 16 ms | 1664 KB
Accepted | 1 * (60 / 100) | 21 ms | 1728 KB

"""

#include <stdio.h>

int main()
{
	unsigned int n;
	int i, j, x[10005], ans[10005]={0};
	scanf("%u",&n);
	for(i=0; i<n; i++){
		scanf("%d",&x[i]);
		for(j=1; j<=(x[i]/2); j++){
			if(x[i]%j==0){
				ans[i]+=j;
			}
		}
	} 
	for(i=0; i<n; i++){
		if(x[i]==ans[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	} 
	return 0;
}