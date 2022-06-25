"""
2022-03-29 21:56:39
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include <stdio.h>
double fact(int n){
	if (n==0){
		return 1;
	}
	else{
		double f=1,i;
		for(i=1;i<=n;i++){
			f*=i;
		}
		return f;
	}
}
int main()
{

double e=1.000000;
long long int n,i=1;
scanf("%lld",&n);
if(n<=17)
{

while(i<=n)
{
	e=e+1.0000000/fact(i);
	i++;
}
printf("%.14f",e);
}
else
{
	while(i<=17)
{
	e=e+1.0000000/fact(i);
	i++;
}
printf("%.14f",e);
}
return 0;
}