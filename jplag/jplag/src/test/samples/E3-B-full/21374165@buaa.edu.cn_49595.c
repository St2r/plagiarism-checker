"""
2022-03-26 17:23:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include<stdio.h>
void f(int n)
{
	int k,sum=0;
	for(k=1;k<=n/2;k++){
		if(n%k==0){
			sum+=k;
		}
	}
	if(sum==n){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
int main()
{
	int x[105],n,k;
	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%d",&x[k]);
		f(x[k]);
	}
	return 0;
}