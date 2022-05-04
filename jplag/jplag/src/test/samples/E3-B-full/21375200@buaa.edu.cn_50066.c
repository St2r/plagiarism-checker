"""
2022-03-28 16:13:52
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[101];
	int i,j,k=0;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=0;
		for(j=1;j<a[i];j++){
			if(a[i]%j==0){
				k=j;
				sum+=k;
			}
		}
		if(sum==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}