"""
2022-03-29 22:16:10
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1656 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1684 KB
Wrong Answer | 0 * (60 / 100) | 2 ms | 1624 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,x[102],sum[102];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
        for(j=1;j<x[i];j++){
			sum[i]=0;
		    if(x[i]%j==0){
			    sum[i]=sum[i]+j;
		    }
		    else{
			    sum[i]=sum[i]+0;
			}
	    }
		if(sum[i]==x[i])
		    printf("YES\n");
	 	else
		    printf("NO\n");
	}
	return 0;
}