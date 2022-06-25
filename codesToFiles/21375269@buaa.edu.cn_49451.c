"""
2022-03-26 12:11:41
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1692 KB
Accepted | 1 * (1 / 10) | 15 ms | 1640 KB
Accepted | 1 * (2 / 10) | 10 ms | 1592 KB
Accepted | 1 * (2 / 10) | 12 ms | 1628 KB
Accepted | 1 * (4 / 10) | 18 ms | 1624 KB

"""

#include<stdio.h> 
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
	long long n;
	long long num = 1;
	double sum = 1.0;
	scanf("%lld",&n);
	if(n > 26) n = 26;
	for(int i=1;i<=n;i++){
		num *= (long long)i;
		sum += (1.0/num);
	}
	printf("%.14f",sum);
	return 0;
}