"""
2022-03-26 09:00:07
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1612 KB
Accepted | 1 * (1 / 4) | 14 ms | 1608 KB
Accepted | 1 * (1 / 4) | 8 ms | 1660 KB
Accepted | 1 * (1 / 4) | 23 ms | 1660 KB

"""

#include<stdio.h>
int fact(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
int main()
{
	int i,n;
	double sum=1;
	scanf("%d",&n);
	for(i=1;i<=(n>=20?20:n);i++){
		sum+=1.0/fact(i);
	}
	printf("%.14f\n",sum);
	return 0;
}