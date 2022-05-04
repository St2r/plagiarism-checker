"""
2022-03-26 12:38:07
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 16 ms | 1648 KB

"""

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(x,y) ((x)<(y)?(x):(y))
#define prn(x) printf("%d",x)
int main()
{
	int n,a,sum=0;
    scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		for(int j=1;j<a;j++){
			if(a%j==0){
				sum+=j;
			}
		} 
		if(sum==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}