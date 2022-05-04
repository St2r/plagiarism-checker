"""
2022-03-26 12:39:10
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h>
int main(){
	int n,i,j;
	int sum=0;
	int t=0;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		sum=0;
		for(t=1;t<a[j];t++){
			if(a[j]%t==0){
			sum=sum+t;
			}
		}
		if(a[j]==sum){
			printf("YES\n");
			}else{
			printf("NO\n");
			}
		}
}