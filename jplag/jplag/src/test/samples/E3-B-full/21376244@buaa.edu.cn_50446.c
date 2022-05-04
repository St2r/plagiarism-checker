"""
2022-03-27 16:46:09
AC
1.0
Accepted | 1 * (5 / 100) | 16 ms | 1528 KB
Accepted | 1 * (35 / 100) | 20 ms | 1700 KB
Accepted | 1 * (60 / 100) | 14 ms | 1572 KB

"""

#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int x,b,a;
	while(n--){
		a=0;
		scanf("%d",&x);
		if(x==1)
		printf("NO\n");
		if(x>1){
		for(b=(x-1);b>=1;b--){
			if(x%b==0)
			a=a+b;
		}
		if(a==x)
		printf("YES\n");
		else
		printf("NO\n");
		}	
	}
	return 0;
}