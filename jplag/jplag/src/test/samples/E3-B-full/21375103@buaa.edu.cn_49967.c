"""
2022-03-26 17:25:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1556 KB
Accepted | 1 * (60 / 100) | 4 ms | 1556 KB

"""

#include <stdio.h>
int main()
{
	int n,a[100],i,k,b[1000],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=0;
		for(k=1;k<a[i];k++){
			if(a[i]%k==0){
				b[k]=k;
			}
			else{
			b[k]=0;
			}
			sum=sum+b[k];
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