"""
2022-03-26 18:31:15
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 3 ms | 1644 KB
Accepted | 1 * (60 / 100) | 3 ms | 1608 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	while(n--){
		int x;
		scanf("%d",&x);
		int sum=0;
		for(int i=1;i<x;i++){
			if(x%i==0){
				sum=sum+i;
			}
		}
		if(sum==x){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}