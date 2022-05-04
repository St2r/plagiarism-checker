"""
2022-03-27 09:02:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,a,i;
	scanf("%d",&n);
	while(n--){
		int sum=0;
		scanf("%d",&a);
		for(i=1;i<a;i++){
			if(a%i==0){
				sum+=i;
			}
		}
		if(sum==a){
			printf("YES\n");
		}else printf("NO\n");
	}
	return 0;
}