"""
2022-03-26 16:53:56
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1656 KB
Accepted | 1 * (35 / 100) | 11 ms | 1660 KB
Accepted | 1 * (60 / 100) | 15 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
	int n,a,ans=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		for(int i=1;i<a;i++){
			if(a%i==0) ans+=i;
		}
		if(ans==a){
			printf("YES\n"); 
		}else{
			printf("NO\n");
		}
		ans=0;
	}
	return 0;
}