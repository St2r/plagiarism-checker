"""
2022-03-26 14:50:08
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 13 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	
	double sum=2,n,i,j,jc=1;
	scanf("%lf",&n);
	if(n>=2&&n<=20){
	
	for(i=2;i<=n;i++)
	{
		for(jc=j=1;j<=i;j++)
		{
			jc*=j;
		}
		sum+=(1/jc);
	}
}
    else if(n==1)
    sum=(double)2;
    else if(n>20)
    sum=2.71828182845905;
    printf("%.14f",sum);
    return 0;
    
}