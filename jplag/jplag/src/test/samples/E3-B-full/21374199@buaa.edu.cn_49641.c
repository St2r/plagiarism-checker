"""
2022-03-28 22:43:02
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1732 KB

"""

#include <stdio.h>
int main(){
	int n,x,sum;
	scanf("%d",&n);
	int a[200];
	for(int i=1;i<=n;i++){
		sum=0;
		scanf("%d\n",&a[i]);
		for(x=1;x<a[i];x++){
			if(a[i]%x==0){
				sum+=x;
			}
		}
		if(sum==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}