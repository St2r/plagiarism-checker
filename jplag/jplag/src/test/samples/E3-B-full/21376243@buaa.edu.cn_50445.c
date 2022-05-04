"""
2022-03-26 17:08:50
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1948 KB
Accepted | 1 * (35 / 100) | 3 ms | 2052 KB
Accepted | 1 * (60 / 100) | 2 ms | 2048 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,i,sum=0;
	scanf("%d",&n);
	while(scanf("%d",&a)!=EOF){
	for(i=1;i<=sqrt(a);i++){
		if(a%i==0){
			sum=sum+i+a/i;
		}
	}
	if(sum-a==a){
		printf("YES\n");
	}
	else
	printf("NO\n");
	
	sum=0;
}
return 0;
}