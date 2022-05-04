"""
2022-03-27 16:51:13
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 2004 KB
Accepted | 1 * (35 / 100) | 12 ms | 1868 KB
Accepted | 1 * (60 / 100) | 15 ms | 2028 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&x);
		int p=1;
		for(int j=2;j<=sqrt(x);++j){
			if(x%j==0 && j!=sqrt(x)){
				p=p+j+(x/j);
			}
			else if(j==sqrt(x)){
				p+=j;
			}
		}
		if(x==p){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}