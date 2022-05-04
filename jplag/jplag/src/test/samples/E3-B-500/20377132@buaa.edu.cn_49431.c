"""
2022-03-27 17:11:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 4 ms | 1596 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(;n>0;n--){
		int x;
		scanf("%d",&x);
		int i,sum=0;
		for(i=1;i<x;i++){
			if(x%i==0){
				sum+=i;
			}
		}
		if(sum==x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}