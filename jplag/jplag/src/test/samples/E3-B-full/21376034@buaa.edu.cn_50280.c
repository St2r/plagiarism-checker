"""
2022-03-26 13:13:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2064 KB
Accepted | 1 * (35 / 100) | 2 ms | 2108 KB
Accepted | 1 * (60 / 100) | 3 ms | 2120 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a;
	int sum=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		for(int j=1;j<=sqrt(a);j++){
			
			if(a%j==0){
				sum=sum+j+a/j;
			}
			if(j*j==a)sum=sum-j;
		}
		
		sum=sum-a;
		if(sum==a)printf("YES\n");
		else printf("NO\n");
		sum=0;
	}
	return 0;
 }