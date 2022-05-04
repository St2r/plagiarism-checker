"""
2022-03-26 12:40:06
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 3 ms | 1596 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main ()
{
	int i,n,a[100],sum=0;
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
		//TODO
	}
	for(i=0;i<=n-1;i++){
		for(int k=1;k<a[i];k++){
		if(a[i]%k==0){
			sum=sum+k;
			//TODO
		}
		}
		if(sum==a[i]){
			printf("YES\n");
			
			//TODO
		}else{
			printf("NO\n");
		}	
		sum=0;
			//TODO
		
		//TODO
	}
}