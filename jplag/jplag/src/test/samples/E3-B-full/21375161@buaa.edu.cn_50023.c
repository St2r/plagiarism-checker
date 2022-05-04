"""
2022-03-27 18:11:03
AC
1.0
Accepted | 1 * (1 / 5) | 2 ms | 1624 KB
Accepted | 1 * (4 / 5) | 3 ms | 1532 KB
39 / 100) | 1000 ms | 896 KB
Time Limit Exceed | 0 * (60 / 100) | 1000 ms | 960 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int i,j, n,x;
	int sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		sum=0;
		for(j=1;j<=x;j++){
			if(x%j==0) sum+=j;
		}
		if(x*2==sum) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}