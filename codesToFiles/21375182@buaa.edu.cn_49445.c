"""
2022-03-26 10:12:54
AC
1.0
Accepted | 1 * (1 / 3) | 11 ms | 1652 KB
Accepted | 1 * (1 / 3) | 9 ms | 1636 KB
Accepted | 1 * (1 / 3) | 567 ms | 1608 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#define FOR(i,s,N) for(i=s; i<N; i++)
#define MAX(a,b) ((a)>(b)?(a):(b))
#define ll long long
#define N 26
#define eps 1e-9
typedef unsigned long long int ull;

int main()
{
	int n,i;
	double s=1,x=1;
    scanf("%d",&n);
    if(n>1000) n=1000;
    for(i=1;i<=n;i++){
    	x/=i;
    	s+=x;
	}
	printf("%.14f",s);
	return 0;
}