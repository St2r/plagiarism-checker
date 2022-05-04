"""
2022-03-27 16:53:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(zhiYingShu(x)==x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
int zhiYingShu(int x)
{
	int i,sum=0;
	for(i=1;i<=x/2;i++){
		if(x%i==0){
			sum+=i;
		}
	}
	return sum;
}