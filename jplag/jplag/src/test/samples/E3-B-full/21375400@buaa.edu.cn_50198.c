"""
2022-03-26 13:05:04
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1712 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>

int main()
{
	int n,a,i,j,sum=0;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		scanf("%d",&a);
		for(sum=0,i=1;i<=a/2;i++){
			if(a%i==0){
				sum+=i;
			}
		}
		if(sum==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

		
	
	return 0;
}