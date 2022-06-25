"""
2022-03-26 20:09:29
AC
1.0
Accepted | 1 * (1 / 8) | 23 ms | 1620 KB
Accepted | 1 * (1 / 8) | 15 ms | 1640 KB
Accepted | 1 * (1 / 8) | 15 ms | 1620 KB
Accepted | 1 * (1 / 8) | 23 ms | 1708 KB
Accepted | 1 * (1 / 8) | 15 ms | 1704 KB
Accepted | 1 * (1 / 8) | 8 ms | 1660 KB
Accepted | 1 * (1 / 8) | 9 ms | 1708 KB
Accepted | 1 * (1 / 8) | 9 ms | 1616 KB
KB

"""

#include<stdio.h>
int main()
{
	int n, a, b=1;
	double c, sum=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		b*=i;
	}
	c=1.0/b;
	if(n>=17){
		n=16;
	}
	else if(n<=16)
	n=n;
	for(int i=1;i<=n;i++){
		a=1;
		for(int j=1;j<=i;j++){
			a*=j;
		}
		sum+=1.0/a;
	}
	printf("%.14f", sum+1);
	return 0;
}