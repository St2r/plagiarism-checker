"""
2022-03-26 13:35:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1584 KB
Accepted | 1 * (35 / 100) | 2 ms | 1584 KB
Accepted | 1 * (60 / 100) | 4 ms | 1484 KB

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
int main() {
	int n=read();
	for(int i=1; i<=n; i++) {
		int cnt=0,a=read();
		for(int i=1; i<a; i++) {
			if(a%i==0) {
				cnt+=i;
			}
		}
		if(cnt==a) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}