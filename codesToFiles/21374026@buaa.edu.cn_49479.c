"""
2022-03-26 13:43:08
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1564 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1572 KB

"""

#include<stdio.h>
#include <ctype.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int read() {
	int a=0,b=1;
	char ch=getchar();
	while((ch<'0'||ch>'9')&&(ch!='-'))ch=getchar();
	if(ch=='-')b=-1,ch=getchar();
	while(ch>='0'&&ch<='9')a=a*10+ch-'0',ch=getchar();
	return a*b;
}
double e=1;
int main() {
	int n=read();
	for(int i=1; i<=n; i++) {
		long long cnt=1;
		for(int j=1;j<=i;j++){
			cnt*=j;
		}
		e+=(1/(double)cnt);
		if(i>=50)break;
	}
	printf("%.14f\n",e);
	return 0;
}