"""
2022-03-28 10:32:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1672 KB
Accepted | 1 * (35 / 100) | 2 ms | 1572 KB
Accepted | 1 * (60 / 100) | 3 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1,j,k; 
	int x[10000];
	int m[10000];
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&x[i]);
		i++;
	}
	for(j=1;j<=n;j++){
		for(k=1;k<=x[j]/2;++k){
			if(x[j]%k==0){
				m[j]+=k;}}
			if(m[j]==x[j]){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	return 0;
}