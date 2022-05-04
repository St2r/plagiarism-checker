"""
2022-03-27 10:30:30
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1584 KB
Accepted | 1 * (1 / 4) | 7 ms | 1644 KB
Accepted | 1 * (1 / 4) | 11 ms | 1624 KB
Accepted | 1 * (1 / 4) | 4 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,x;
	long long sum=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		for(j=2;j<=sqrt(x);j++){
			if(x%j==0){
				sum+=(j+x/j);
			}
		}
		if(sum==x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		sum=1;
	}
	return 0;
}