"""
2022-03-29 13:03:42
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1628 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n, i, b=1, sum[100], a[100], cnt=0, j, k;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d", &a[cnt]);
		 
	for(b=1;b<=(a[cnt]/2);b++){
		sum[cnt]=0;
		if(a[cnt]%b==0){
			k += b;
			
		}
	
		}
		sum[cnt]=k;
		k=0;
	cnt++;	 
	}
	for(j=0;j<=n-1;j++){

		if(sum[j]==a[j]){
			printf("YES\n"); 
		}else{
			printf("NO\n");
		}
			
			}
	return 0;
}