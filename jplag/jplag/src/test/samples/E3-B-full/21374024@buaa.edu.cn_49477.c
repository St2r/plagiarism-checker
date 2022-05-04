"""
2022-03-29 14:49:03
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int number[n];
	int sum[i];
	for(i=0;i<n;i++){
		scanf("%d",&number[i]);
	}
	int x,y;
	for(x=0;x<n;x++){
		sum[x] = 1;
		for(y=2;y<=number[x]/2;y++){
			if(number[x] % y == 0){
				sum[x] += y;
				//printf("%d\n",y);
			}
		}
		if(number[x]==sum[x]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}