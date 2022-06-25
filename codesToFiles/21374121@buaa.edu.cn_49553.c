"""
2022-03-26 21:15:26
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 3 ms | 1664 KB

"""

#include<stdio.h>
int main(){
	int n,pro=1;
	double sum=1.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i>20) break;
		for(int j=1;j<=i;j++) pro*=j;
		sum+=1.0/pro;
		pro=1;
	}
	printf("%.14f",sum);
	return 0;
}