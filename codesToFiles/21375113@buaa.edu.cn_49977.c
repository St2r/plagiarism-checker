"""
2022-03-28 20:56:56
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 0 ms | 1748 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1,i2;
	long long i1;
	double x=1;
	scanf("%d",&n);
	if(n>=18){
	while(i<=18){
	for(i2=i,i1=1;i2>0;i2--){
		i1*=i2;
	}
	x+=1.0*1/i1;
	i++;}
	printf("%.14f",x);	
}
	else{
	while(i<=n){
	for(i2=i,i1=1;i2>0;i2--){
		i1*=i2;
	}
	x+=1.0*1/i1;
	i++;
	}
	printf("%.14f",x);
}
return 0;
}