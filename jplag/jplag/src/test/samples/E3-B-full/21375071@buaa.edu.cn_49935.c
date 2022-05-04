"""
2022-03-27 10:22:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,num=0,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		for(j=1;j<=(a-1);j++){
			if(a%j==0){
				num+=j;
			}
		}
		if(num==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		num=0;
	}
	return 0;
}