"""
2022-03-26 15:14:12
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (1 / 10) | 4 ms | 1688 KB
Accepted | 1 * (2 / 10) | 4 ms | 1652 KB
Accepted | 1 * (2 / 10) | 5 ms | 1672 KB
Accepted | 1 * (4 / 10) | 2 ms | 1688 KB

"""

#include<stdio.h>

int main(){
	int a;
	int n;
	scanf("%d",&n);
	int i;
	int j;
	for(j=1;j<=n;j++){
		scanf("%d",&a);
		int cnt=0;
		for(i=1;i<a;i++){
			if(a%i==0)cnt+=i;
		}
		if(cnt==a)
		printf("YES\n");
		else 	printf("NO\n");
	}
	return 0;
}