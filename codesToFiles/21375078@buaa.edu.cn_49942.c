"""
2022-03-27 16:51:41
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include <stdio.h>

int main(){
	int n;
	double e=1.0;
	scanf("%d",&n);
	if(n<=17){
		int i;
		for(i=1;i<=n;i++){
			int p;
			long long ret=1;
			for(p=1;p<=i;p++){
				ret*=p;
			}
			
			e+=1.0/ret;
		}
		printf("%.14f",e);
	}
else{
		int i;
		for(i=1;i<=17;i++){
			int p;
			long long ret=1;
			for(p=1;p<=i;p++){
				ret*=p;
			}
			e+=1.0/ret;
		}
		printf("%.14f",e);
	}
	return 0;
}