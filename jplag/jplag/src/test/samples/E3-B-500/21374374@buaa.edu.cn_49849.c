"""
2022-03-27 11:07:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 2 ms | 1632 KB

"""

#include <stdio.h>

int main()
{
	int n,i,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		if(x==6||x==28||x==496||x==8128){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	

	return 0;
}