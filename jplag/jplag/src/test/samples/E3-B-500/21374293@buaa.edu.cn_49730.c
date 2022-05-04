"""
2022-03-29 07:57:47
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main(){
	int n,i,j,k,sum;
	int a[101];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n;j++){
		sum=0;
		for(k=1;k<a[j];k++){
			if(a[j]%k==0){
				sum+=k;
			}
		}
		if(sum==a[j]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}