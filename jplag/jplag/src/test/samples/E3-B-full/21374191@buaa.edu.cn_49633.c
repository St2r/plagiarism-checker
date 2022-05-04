"""
2022-03-26 16:03:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 3 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n, x[110]={0}, i, j, ans[110]={0};
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=1;j<x[i];j++){
			if(x[i]%j==0){
				ans[i]+=j;
			}
		}
	}
	for (i=0;i<n;i++){
		if(x[i]==ans[i])
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}