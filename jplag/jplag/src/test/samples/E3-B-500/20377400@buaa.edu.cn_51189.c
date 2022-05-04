"""
2022-03-27 12:49:36
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1708 KB
Accepted | 1 * (35 / 100) | 11 ms | 1636 KB
Accepted | 1 * (60 / 100) | 12 ms | 1656 KB

"""

#include<stdio.h>

int main(){
	int n,a[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		int sum=0;
		for(int j=1;j<a[i];j++){
			if(a[i]==j*(a[i]/j)) sum+=j;
		}
		if(sum==a[i]) printf("YES\n");
		else printf("NO\n");
	}
}