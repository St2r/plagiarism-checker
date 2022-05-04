"""
2022-03-27 13:54:49
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	for(i=1;i<=n;i++){
		int a;
		scanf("%d",&a);
		int sum=0;
		int j=1;
		for(j=1;j<a;j++){
			if(a%j==0){
				sum+=j;
			}
		}
		if(sum==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}