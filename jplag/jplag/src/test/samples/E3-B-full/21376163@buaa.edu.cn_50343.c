"""
2022-03-27 21:00:29
AC
1.0
Accepted | 1 * (1 / 4) | 9 ms | 1712 KB
Accepted | 1 * (1 / 4) | 9 ms | 1628 KB
Accepted | 1 * (1 / 4) | 2 ms | 1712 KB
Accepted | 1 * (1 / 4) | 10 ms | 1668 KB

"""

#include<stdio.h>
#include <string.h>
#include<math.h>
int main(){
	int n,a,sum=0;
	int i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		sum=0;
		for(j=1;j<a;j++){
			if(a%j==0) sum+=j;
		}
		if(sum==a)printf("YES");
		else printf("NO");
	}
	return 0;
}