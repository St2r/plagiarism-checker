"""
2022-03-26 13:56:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1564 KB
Accepted | 1 * (35 / 100) | 3 ms | 1552 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int i,j,sum=0;
	int k=1;
	int a[105];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		for(k=1;k<=a[j]/2;k++){
			if(a[j]%k==0){
				sum=sum+k;
			}
			
			}
			if(sum==a[j]){
				printf("YES\n");
				//printf("%d\n",sum);
				
			}else{
				printf("NO\n");
				//printf("%d\n",sum);
		}
		sum=0;
	}
	return 0;
}