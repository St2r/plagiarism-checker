"""
2022-03-29 23:20:19
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2148 KB
Accepted | 1 * (35 / 100) | 1 ms | 1988 KB
Accepted | 1 * (60 / 100) | 1 ms | 2064 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,k,sum=0;
	scanf("%d",&k);
	while(k--){
		scanf("%d",&n);
		for(i=1;i<sqrt(n);i++){
			if(n%i==0){
			sum+=i;
			if((n/i)!=n&&i!=n){
				sum+=(n/i);
			}
		}
		
	}
	if(sum==n){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}