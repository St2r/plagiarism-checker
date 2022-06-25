"""
2022-03-24 22:44:20
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <assert.h>
typedef long long LL;
typedef unsigned long long ULL;
#pragma warning(disable:4996)
long long gcd(long long a, long long b){
	return (a % b) ? gcd(b, a % b) : b;
}
int a[114514] = { 0 };
int main(){
#ifdef _DEBUG
#ifdef __GNUC__
	freopen("../../../inputgcc.txt", "r", stdin);
#else
	freopen("../../../input.txt", "r", stdin);
#endif 	
#endif 
	int n, i;
	scanf("%d", &n);
	if(n >= 100)n = 100;
	double k = 1.0, s = 1.;
	for(i = 1; i <= n; i++){	
		k *= i;
		s += 1.0 / k;
	}
	printf("%.14f\n", s);
#ifdef _DEBUG
	freopen("CON", "r", stdin);
	system("pause");
#endif 

	return 0;
	}