"""
2022-03-28 21:29:51
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2136 KB
Accepted | 1 * (35 / 100) | 2 ms | 1984 KB
Accepted | 1 * (60 / 100) | 56 ms | 2084 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n,x[10005],i,j,k,sum=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf(" %d",&x[i]);
	}
	for(i=1;i<=n;i++){
		sum=0;
		for(j=1;j<=sqrt(x[i]);j++){
			for(k=x[i];k>=j;k--){
				if(j*k==x[i])
				sum=sum+j+k;
			}
		}
		sum=sum-x[i];
		if(sum==x[i])
		printf("YES\n");
		else
		printf("NO\n");	
	}
	
	
	return 0;
}