"""
2022-03-28 21:12:21
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1748 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double sum=1,t=1;
	scanf("%d",&n);
	if(n<=16){
	for(int i=1;i<=n;i++){
		t=t*i;
		sum=sum+(1/t);
		}
		
	printf("%.14f\n",sum);
}
else{
	printf("2.71828182845905\n");
}
	return 0;
 }