"""
2022-03-27 21:18:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 12 ms | 1552 KB
Accepted | 1 * (60 / 100) | 13 ms | 1552 KB

"""

#include<stdio.h>
void f(int a){
	int s=0;
	for(int i=1;i<=a-1;i++){
		if(a%i==0){
			s+=i;
		}
	}
	if(s==a){
		printf("YES\n");
	}
	else printf("NO\n");
	}
int main()
{
int n,x[100];
scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d",&x[i]);
	f(x[i]);
}
    return 0;
}