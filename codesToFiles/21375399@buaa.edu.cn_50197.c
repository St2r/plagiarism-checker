"""
2022-03-26 21:03:37
AC
1.0
Accepted | 1 * (1 / 8) | 2 ms | 1620 KB
Accepted | 1 * (1 / 8) | 10 ms | 1660 KB
Accepted | 1 * (1 / 8) | 3 ms | 1660 KB
Accepted | 1 * (1 / 8) | 16 ms | 1664 KB
Accepted | 1 * (1 / 8) | 3 ms | 1660 KB
Accepted | 1 * (1 / 8) | 2 ms | 1656 KB
Accepted | 1 * (1 / 8) | 2 ms | 1660 KB
Accepted | 1 * (1 / 8) | 2 ms | 1632 KB

"""

#include<stdio.h>
int main(){int n,i,m,a;
	double t;
	t=1;
	scanf("%d",&n);
	if(n>=18){
		for(i=1;i<=17;i++){a=1;
			for(m=1;m<=i;m++){
			a=m*a	;
			}t=t+1.0/a;
		}
	}else{
		for(i=1;i<=n;i++){a=1;
			for(m=1;m<=i;m++){
			a=m*a	;
			}t=t+1.0/a;
		}
	}
	printf("%.14f",t);
}