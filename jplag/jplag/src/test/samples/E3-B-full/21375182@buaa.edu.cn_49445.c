"""
2022-03-26 10:00:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 12 ms | 1636 KB
Accepted | 1 * (60 / 100) | 30 ms | 1660 KB

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
	int n,a[2000],e=0,i,j,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    for(i=1;i<=n;i++){
    	s=0;
    	for(j=1;j<a[i];j++){
    		if(a[i]%j==0){
    			s+=j;
			}
		}
		if(s==a[i]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}