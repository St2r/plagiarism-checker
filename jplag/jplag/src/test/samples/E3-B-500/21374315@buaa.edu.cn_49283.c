"""
2022-03-26 12:43:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 3 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h>

int main(){
	int n,a[110],sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=1;j<=a[i];j++){
			if((a[i]%j)==0){
				sum+=j;
			}
		}
		sum-=a[i];
		if(sum==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}