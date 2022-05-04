"""
2022-03-26 08:43:41
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1600 KB
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		int a,i,count=0;
		scanf("%d",&a);
		if(a==1){
			printf("YES\n");
			continue;
		}
		for(i=1;i<=a-1;i++){
			if(a%i==0){
				count+=i;
			}
		}
		if(count==i){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}